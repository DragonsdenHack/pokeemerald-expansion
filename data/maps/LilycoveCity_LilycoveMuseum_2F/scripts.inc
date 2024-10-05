.set LOCALID_CURATOR, 1

LilycoveCity_LilycoveMuseum_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_OnFrame
	.byte 0

LilycoveCity_LilycoveMuseum_2F_OnLoad:
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting::
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting::
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting::
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting::
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting
	end


LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting::
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting::
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting::
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting::
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting::
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
	end

LilycoveCity_LilycoveMuseum_2F_OnFrame:
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
	map_script_2 VAR_ROUTE117_STATE, 9, LilycoveCity_LilycoveMuseum_2F_Secundaria
	.2byte 0

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
	lockall
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
	waitmovement 0
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
	waitmovement 0
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
	waitmovement 0
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft:
	walk_in_place_faster_left
	step_end

LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall:
	face_up
	delay_16
	step_end

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
	lockall
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer::
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament::
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
	givedecoration DECOR_GLASS_ORNAMENT
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
	closemessage
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament::
	call Common_EventScript_NoRoomForDecor
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
	lockall
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
	lockall
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
	lockall
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
	lockall
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
	lockall
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting::
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
	fadescreen FADE_TO_BLACK
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall:
	.string	"Ésta es nuestra sala especial\n"
	.string	"de exposiciones.$"

LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall:
	.string	"Como puedes ver, no tenemos expuesto\n"
	.string	"ni un solo cuadro…\p"
	.string	"Aquí no quiero exponer las obras\n"
	.string	"del llamado arte clásico.\p"
	.string	"Dichas obras están en nuestra planta\n"
	.string	"baja.\p"
	.string	"Aquí quiero exponer obras totalmente\n"
	.string	"nuevas, diferentes.\p"
	.string	"¡El arte no se restringe a las obras\n"
	.string	"más famosas de tiempos pasados!\p"
	.string	"Esta sala… quisiera llenarla con…\p"
	.string	"¡obras modernas y atrevidas sobre\n"
	.string	"POKéMON dispuestos a entrar\l"
	.string	"en los anales de la historia!$"

LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit:
	.string	"Discúlpame, no pretendía monopolizar\n"
	.string	"la conversación.\p"
	.string	"En fin, aunque eres joven, se ve que\n"
	.string	"has viajado mucho…\p"
	.string	"Seguro que te cruzarás con muchos\n"
	.string	"POKéMON y obras que los plasmen.\p"
	.string	"Si encontraras algún cuadro de este\n"
	.string	"tipo, ¿podrías obtener la autorización\l"
	.string	"del artista para exponerlo aquí?$"

LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit:
	.string	"Deseo llenar esta sala de exposiciones\n"
	.string	"con cuadros modernos y atrevidos\l"
	.string	"sobre POKéMON.$"

LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting:
	.string	"Gracias a ti, esta pintura formará\n"
	.string	"parte de nuestra colección.\p"
	.string	"Y además plasma a tu POKéMON.\n"
	.string	"¡Es una obra excepcional!\p"
	.string	"Muchísimas gracias.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer:
	.string	"¡Ah, eres tú, {PLAYER}!$"

LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests:
	.string	"¿No es soberbio?\n"
	.string	"¡Qué colección de arte!\p"
	.string	"¡Todas impecables!\n"
	.string	"¡Todas admirables!\p"
	.string	"Estas obras han atraído a muchos\n"
	.string	"visitantes a nuestro MUSEO.\p"
	.string	"Te lo agradezco de verdad, {PLAYER}.\n"
	.string	"¡Es un sueño hecho realidad!$"

LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude:
	.string	"Ésta es sólo una muestra de mi gratitud.$"

LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou:
	.string	"Te lo guardo hasta que vuelvas\n"
	.string	"por aquí.$"

LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit:
	.string	"¡Qué alegría verte, {PLAYER}!\p"
	.string	"Es un honor que tengas tiempo\n"
	.string	"para visitarnos a pesar de tus viajes.\p"
	.string	"Adelante, descansa y disfruta\n"
	.string	"de tu visita.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame:
	.string	"Es un marco con motivos rosas.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame:
	.string	"Es un marco con motivos amarillos.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame:
	.string	"Es un marco con motivos azules.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame:
	.string	"Es un marco con motivos rojos.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame:
	.string	"Es un marco con motivos verdes.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon:
	.string	"Es un cuadro de un POKéMON.$"

LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe:
	.string	"Hacía tiempo que no venía, así que me\n"
	.string	"he sorprendido al ver las nuevas obras.\p"
	.string	"¡Cuánto me gustaría que alguien\n"
	.string	"retratara a mi POKéMON también!$"

LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing:
	.string	"Ajá, así que aquí es donde exponen\n"
	.string	"las nuevas pinturas sobre POKéMON.\p"
	.string	"Pues sí, la verdad es que son\n"
	.string	"bastante divertidas.$"

LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon:
	.string	"Ahí va, ¿es verdad?\n"
	.string	"¿Son cuadros de tus POKéMON?\p"
	.string	"Ésa debe de ser la mayor alegría que\n"
	.string	"pueden dar a cualquier ENTRENADOR.$"

LilycoveMuseum_2F_Secundaria_Move_1:
walk_left
step_end

LilycoveMuseum_2F_Secundaria_Move_2:
delay_16
face_up
delay_16
delay_8
walk_right
face_up
step_end

LilycoveMuseum_2F_Secundaria_Move_3:
walk_in_place_up
step_end

LilycoveMuseum_2F_Secundaria_Move_4:
walk_down
walk_down
face_left
step_end

LilycoveMuseum_2F_Secundaria_Move_5:
delay_16
delay_16
face_right
step_end

LilycoveMuseum_2F_Secundaria_Move_6:
walk_in_place_right
step_end

LilycoveMuseum_2F_Secundaria_Move_7:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
delay_8
face_up
step_end

LilycoveMuseum_2F_Secundaria_Move_8:
delay_16
delay_16
face_right
delay_16
delay_16
step_end

LilycoveMuseum_2F_Secundaria_Move_9:
delay_16
face_up
delay_16
step_end

LilycoveMuseum_2F_Secundaria_Move_9.1:
walk_in_place_up
step_end

LilycoveMuseum_2F_Secundaria_Move_10:
delay_16
delay_16
face_left
delay_16
delay_16
step_end

LilycoveMuseum_2F_Secundaria_Move_11:
delay_16
walk_in_place_right
step_end

LilycoveMuseum_2F_Secundaria_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
face_up
step_end



LilycoveCity_LilycoveMuseum_2F_Secundaria::
lock
delay 10
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_1
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_2
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_3
waitmovement 0x0
delay 15
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_5
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_4
waitmovement 0x0
delay 10
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_6
waitmovement 0x0
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_7
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_7
waitmovement 0x0
delay 30
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_8
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_10
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_9
waitmovement 0x0
delay 10
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_9.1
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_11
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_12
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_12
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_14
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_13
waitmovement 0x0
delay 15
msgbox LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_15
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_16
waitmovement 0x0
delay 10
applymovement 1, LilycoveMuseum_2F_Secundaria_Move_11
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_2F_Secundaria_Move_17
waitmovement 0x0
warp MAP_LILYCOVE_CITY_MUSEO_3F, 36, 15
setvar VAR_ROUTE117_STATE, 10
release
end

LilycoveMuseum_2F_Secundaria_Move_17:
walk_slow_up
step_end

LilycoveMuseum_2F_Secundaria_Move_16:
delay_16
walk_slow_up
delay_16
delay_8
face_left
step_end

LilycoveMuseum_2F_Secundaria_Move_15:
walk_up
face_right
step_end


LilycoveMuseum_2F_Secundaria_Move_13:
face_right
step_end

LilycoveMuseum_2F_Secundaria_Move_14:
face_left
step_end

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_1:
	.string "Sí{PAUSE 25}…{PAUSE 25} Ahora mismo va.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_2:
	.string "Tiene pinta de haber viajado mucho,\n"
	.string "¿me equivoco?$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_2.1:
	.string "Venga conmigo.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_3:
	.string "HOENN es una región fascinante.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_4:
	.string "Habrá estado en muchas regiones,\n"
	.string "imagino. Pero seguro que ninguna con\l"
	.string "esta fauna y flora, este perfecto{PAUSE 15}…{PAUSE 15}\l"
	.string "equilibrio.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_5:
	.string "Todas estas pinturas, este lujo, no\n"
	.string "serían nada sin él.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_6:
	.string "Ahora, déjeme mostrarle algo.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_7:
	.string "La mayor accionista de este MUSEO\n"
	.string "quiere agradecerle en persona su\l"
	.string "actuación.$"

LilycoveCity_LilycoveMuseum_2F_Secundaria_Texto_8:
	.string "Está esperándole en la sala de juntas.$"

