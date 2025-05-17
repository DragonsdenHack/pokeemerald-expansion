RocketHideout_4F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_4F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
    .byte 0

RocketHideout_4F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 46, PokemonTower5F_Escena_4_Blaine
map_script_2 VAR_UNUSED_0x40F7, 58, RocketHideout_4F_Escena_Castigo_Reclutas
map_script_2 VAR_ROUTE105_STATE, 5, RocketHideout_4F_Escena_Motoristas
map_script_2 VAR_UNUSED_0x40F7, 805, RocketHideout_4F_Disguise_Player
	.2byte 0


RocketHideout_4F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 804, RocketHideout_4F_Disguise_Player_2
	.2byte 0

RocketHideout_4F_Disguise_Player_2::
setobjectxy 1, 18, 8
applymovement 1, RocketHideout_4F_Disguise_Player_2_move_1
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.10
setvar VAR_UNUSED_0x40F7, 805
end

RocketHideout_4F_Disguise_Player_2_move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.10:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end
	
	



RocketHideout4F_1::
end

RocketHideout4F_Dialogos_Giovanni::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 216
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC
compare VAR_UNUSED_0x40F7, 204
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoLavanda
compare VAR_UNUSED_0x40F7, 201
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral
compare VAR_UNUSED_0x40F7, 190
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela
compare VAR_UNUSED_0x40F7, 178
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC
compare VAR_UNUSED_0x40F7, 167
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda
compare VAR_UNUSED_0x40F7, 115
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto
compare VAR_UNUSED_0x40F7, 112
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak
compare VAR_UNUSED_0x40F7, 106
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera
compare VAR_UNUSED_0x40F7, 101
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph
compare VAR_UNUSED_0x40F7, 94
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas
compare VAR_UNUSED_0x40F7, 92
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga
compare VAR_UNUSED_0x40F7, 78
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios
compare VAR_UNUSED_0x40F7, 71
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph
compare VAR_UNUSED_0x40F7, 62
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda
compare VAR_UNUSED_0x40F7, 43
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoLavanda::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end


RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral_Texto_1:
	.string "Vuelve a la vías de tren, {PLAYER}. La\n"
	.string "conexión TRIGAL-AZAFRÁN está\l"
	.string "prácticamente cerrada, solo ese\l"
	.string "POKÉMON se interpone en nuestro\l"
	.string "camino. Si recorres toda la vía desde\l"
	.string "CIUDAD TRIGAL, eventualmente lo\l"
	.string "encontrarás.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela_Texto_1:
	.string "El PROFESOR OAK te estará esperando en\n"
	.string "lo que queda de ISLA CANELA. Confía en\l"
	.string "él, {PLAYER}. Él te dirá qué hacer.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1:
	.string "Ve a la BASE de HOENN, {PLAYER}.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1:
.string "Estoy sorprendido de que hayas logrado\n"
	.string "llegar tan lejos. Grandes cambios se\l"
	.string "avecinan, el futuro de KANTO es\l"
	.string "incierto, y lo que puedas encontrarte\l"
	.string "en HOENN una incógnita. Espero que\l"
	.string "hayas disfrutado de este DLC, que\l"
	.string "marca la transición hacia el final del\l"
	.string "hack. Como siempre, puedes encontrarme\l"
	.string "tanto en el canal de youtube\l"
	.string "DragonsdenTV, como en el foro Whack a\l"
	.string "hack. HOENN espera, toda historia tiene\l"
	.string "su fin, pero esta{PAUSE 25}…{PAUSE 25} aún no, sigues\l"
	.string "participando en su devenir, de modo\l"
	.string "que{PAUSE 25}…{PAUSE 25}mantente mejorando hasta la\l"
	.string "próxima versión.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1:
	.string "GIOVANNI: {PLAYER}! You're amazing!\p"
	.string "You defeated the three most powerful\n"
	.string "POKÉMON of all time!\p"
	.string "Do you understand the reason for your\n"
	.string "victory? At the moment the immortality\l"
	.string "of such POKÉMON was subject to the rules\l"
	.string "governing POKÉMON battles between two\l"
	.string "TRAINERS, their powers ceased to be\l"
	.string "infinite and, therefore, vulnerable.\p"
	.string "I'm amazed that you have made it this\n"
	.string "far. Big changes are coming, the future\l"
	.string "of KANTO is uncertain.\p"
	.string "I hope you enjoyed the JOHTO arc, that's\n"
	.string "the 'season 3' of this hack; DLC arc will\l"
	.string "be 'season 4'.\l"
	.string "As always, you can find me both on the\l"
	.string "Dragonsden Power youtube channel, or at\l"
	.string "pokecomunnity (ROM hacks Showcase post).\p"
	.string "The transition to G/S/C neo KANTO-JOHTO\n"
	.string "is waiting, every story has an end, but\l"
	.string "this one{PAUSE 25}…{PAUSE 25} not yet, you are\l"
	.string "still being part of it, of its destiny.\p"
	.string "So, thanks for playing and{PAUSE 25}…{PAUSE 25}keep improving\n"
	.string "until the next version.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1:
	.string "Wir werden ein für alle mal hinter das\n"
	.string "Geheimnis des ESSENZ-POKéMON kommen.\p"
	.string "Und sobald uns das gelungen ist, wird\n"
	.string "uns nichts und niemand mehr aufhalten\l"
	.string "können, KANTO und JOHTO zu den\l"
	.string "mächtigsten Regionen der gesamten\l"
	.string "POKéMON-WELT zu machen.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1:
	.string "JOHTO ist die geschichtsträchtigste\n"
	.string "und traditionsreichste Region der Welt.\p"
	.string "Zumindest von den Regionen, die uns\n"
	.string "bekannt sind. An ihr ist zweifellos\l"
	.string "etwas {PAUSE 25}…{PAUSE 25} Spirituelles. Und auch wenn es\l"
	.string "sich uns vielleicht nie vollständig\l"
	.string "erschließen wird, können wir ihre Macht\l"
	.string "nicht ignorieren.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1:
	.string "Die POKéMON LIGA wurde seit dem Krieg\n"
	.string "nicht mehr ernsthaft herausgefordert.\p"
	.string "Der Mangel an würdigen Gegnern hat sie\n"
	.string "allerdings geschwächt. SIEGFRIED\l"
	.string "verlässt sich zu sehr auf die\l"
	.string "überlegenen Statuswerte seiner\l"
	.string "POKéMON. Doch du hast zwei der\l"
	.string "LEGENDÄREN KANTO VÖGEL besiegt.\p"
	.string "Du weißt also aus erster Hand, dass\n"
	.string "Statuswerte nicht alles in einem Kampf\l"
	.string "sind.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1:
	.string "Gehe zum POKéMON-HAUS, {PLAYER} und\n"
	.string "zeige EICH, wie ein Trainer kämpft, der\l"
	.string "wirklich im Einklang mit seinen POKéMON\l"
	.string "ist!$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1:
	.string "traducir$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1:
	.string "Sprich mit der Empfangsdame von SILPH.\n"
	.string "Sie wird dich in die private Bibliothek\l"
	.string "im Untergeschoss führen. Laut dem\l"
	.string "Präsidenten befinden sich die\l"
	.string "Informationen über das\l"
	.string "ESSENZ-POKéMON in Sektion 3,\l"
	.string "im letzten Raum.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1:
	.string "Ruhe dich aus und genieße die Inseln,\n"
	.string "{PLAYER}. Es gibt dort eine Menge zu\l"
	.string "entdecken, sofern du weißt, wo du\l"
	.string "suchen musst. Vielleicht weiht dich\l"
	.string "ATLAS, den du in unserer BASIS auf\l"
	.string "EILAND FÜNF findest, in einige\l"
	.string "Geheimnisse ein. Er kennt die SEVII\l"
	.string "EILANDE besser als jeder andere.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1:
	.string "{PLAYER}, du kannst die Arenen in\n"
	.string "beliebiger Reihenfolge herausfordern,\l"
	.string "aber ich empfehle nach der\l"
	.string "traditionellen Reihenfolge vorzugehen.\p"
	.string "Übrigens. Die ARENA auf der\n"
	.string "ZINNOBERINSEL ist derzeit\l"
	.string "geschlossen. Du wirst also warten\l"
	.string "müssen, bis dieser Feigling PYRO sie\l"
	.string "wieder eröffnet. Und vergiss nicht:\p"
	.string "Wenn du die ersten sieben Orden\n"
	.string "gesammelt hast, wartet immer noch\l"
	.string "unsere Arena in VERTANIA CITY auf dich.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1:
	.string "Ich habe großes Vertrauen in dich,\n"
	.string "{PLAYER}! SILPHs\l"
	.string "Sicherheitsvorkehrungen sind zwar sehr\l"
	.string "streng, aber sie hatten noch nie mit\l"
	.string "Trainern wie dir oder ANDRA zu tun.\p"
	.string "Geh zu SILPH und zeig ihnen, wie ein\n"
	.string "wahrer ROCKET kämpft!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1:
	.string "Wir haben ARKTOS auf den\n"
	.string "SEESCHAUMINSELN lokalisiert. Um\l"
	.string "dorthin zu gelangen, musst du zuerst\l"
	.string "nach LAVANDIA und dann gen Süden\l"
	.string "gehen - sprich über die ROUTEN 12, 13,\l"
	.string "14 und 15. Schließlich musst du dann\l"
	.string "noch über das Meer südlich FUCHSANIA\l"
	.string "CITY surfen. Falle nicht dem Hochmut\l"
	.string "anheim, {PLAYER}! Ich an deiner Stelle\l"
	.string "würde den langen Weg zu ARKTOS zum\l"
	.string "Trainieren nutzen. Es braucht mehr als\l"
	.string "bloße Kampffähigkeiten, um einen\l"
	.string "legendären Vogel zu bezwingen!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1:
	.string "Du denkst also, ich sei ineffizient und\n"
	.string "würde ein schlechtes Beispiel abgeben,\n"
	.string "weil ich hier sitze und scheinbar nichts\l"
	.string "tue, während die anderen Offiziere mit\l"
	.string "ihren Technologien beschäftigt sind?\l"
	.string "Lass mich dir etwas sagen, Bursche!\p"
	.string "Wenn du gesehen hättest, was ich\n"
	.string "gesehen habe, würdest du wissen, dass\l"
	.string "man irgendwann an einen Punkt kommt, an\l"
	.string "dem der eigene Verstand weitaus\l"
	.string "mächtiger und wertvoller wird als jede\l"
	.string "Information, die du da draußen sammeln\l"
	.string "könntest!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1:
	.string "Das Treffen mit MR. FUJI ist\n"
	.string "entscheidend für unsere Ziele,\l"
	.string "{PLAYER}. Sobald du den POKéMON-TURM\l"
	.string "erreicht hast, wird BLAU die unteren\l"
	.string "Etagen absichern. Du wirst in den\l"
	.string "oberen Etagen Wache halten und\l"
	.string "umgehend LANCE alarmieren, falls etwas\l"
	.string "schiefgeht. Verstanden? Du bildest in\l"
	.string "dieser Mission unsere letzte\l"
	.string "Verteidigungslinie.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1:
	.string "Nun? Ich möchte, dass das KANGAMA aus\n"
	.string "dem FELSTUNNEL verschwindet. Nehme\l"
	.string "zunächst den TUNNELPFAD östlich von\l"
	.string "PRISMANIA. Er wird dich nach LAVANDIA\l"
	.string "führen. Von dort aus liegt der\l"
	.string "FELSTUNNEL gleich nördlich.\p"
	.string "Und vergiss nicht: Halte dich vom\n"
	.string "POKéMON-TURM fern. Wir haben bereits\l"
	.string "Pläne für diesen Ort.$"




RocketHideout4F_3::
lock     
faceplayer     
msgbox RocketHideout4F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_3:
	.string "Mach dir kein Stress, Bruder. Selbst\n"
	.string "wenn's jemand in die Basis schafft, wird\l"
	.string "er's nie bis zum Boss schaffen!\p"
	.string "Nicht ohne den LIFTÖFFNER, haha!$"



RocketHideout4F_5::
lock     
faceplayer     
msgbox RocketHideout4F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_5:
	.string "Zeige etwas Respekt und halte Abstand,\n"
	.string "wenn du dich dem BOSS näherst, Rekrut!\p"
	.string "Wenn TEAM ROCKET für eines bekannt ist,\n"
	.string "dann sind es unsere strengen\l"
	.string "Protokolle.$"



RocketHideout4F_6::
lock     
faceplayer     
msgbox RocketHideout4F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_6:
	.string "Zeige etwas Respekt und halte Abstand,\n"
	.string "wenn du dich dem BOSS näherst, Rekrut!\p"
	.string "Wenn TEAM ROCKET für eines bekannt ist,\n"
	.string "dann sind es unsere strengen\l"
	.string "Protokolle.$"



RocketHideout4F_7::
end



RocketHideout4F_10::
end

RocketHideout_4F_Mision_Andra_Fucsia::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_2::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1.1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_6
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.2:
walk_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_Texto_1:
	.string "ANDRA: Während du dir alle Zeit der Welt\n"
	.string "gelassen hast, hat mir unser\l"
	.string "großartiger Anführer bereits eine\l"
	.string "Mission erteilt. Es gibt Stress mit den\l"
	.string "BIKERN auf dem RADWEG in FUCHSANIA\l"
	.string "CITY, und rate mal, wer als Vermittler\l"
	.string "fungieren soll? Genau. Ich.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_2:
	.string "Und … Was hältst du von der neuen\n"
	.string "Basis? LAMBDA scheint übertrieben zu\l"
	.string "haben, als er sagte, dieses Versteck in\l"
	.string "PRISMANIA sei ganz anders als das auf\l"
	.string "ROUTE 5. Klar, es ist größer, aber\l"
	.string "abgesehen davon sehen sie sich doch\l"
	.string "ziemlich ähnlich, oder?$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3:
	.string "Naja, egal. Ich bin dann mal weg. Meine\n"
	.string "erste Mission hier muss von Anfang bis\l"
	.string "Ende perfekt verlaufen.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1:
	.string "Oh und GIOVANNI hat nach dir gefragt.\p"
	.string "Du solltest also besser schnell in sein\n"
	.string "Büro gehen. Vielleicht hat er auch eine\l"
	.string "wichtige Mission für dich.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_4:
.string "Wie ich schon gesagt habe!\p"
	.string "FUCHSANIA CITY gehört mir!$"

RocketHideout_4F_Mision_Andra_Fucsia_move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_2:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_3:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_4:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5:
walk_up
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.1:
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_6:
walk_down
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_1::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2

RocketHideout_4F_Giovanni_Mision_1_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2


RocketHideout_4F_Giovanni_Mision_1_Parte2::
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_3
waitmovement 0x0
fadeoutbgm 0
playse 582
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 60
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 30
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 4
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
playse MUS_RG_SILPH
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.2
waitmovement 0x0
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_12
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_12
waitmovement 0x0
waitse
delay 30
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_25 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_13
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 4
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_29 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30.1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
setvar VAR_UNUSED_0x40F8, 1
setvar VAR_UNUSED_0x40F7, 39
release
end

RocketHideout_4F_Giovanni_Mision_1_move_11.2:
delay_8
face_right
delay_16
delay_8
face_up
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11.1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.3:
delay_16
face_up
delay_16
delay_8
face_down
delay_16
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.1:
delay_8
face_left
delay_16
delay_16
face_down
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_1_Texto_1:
	.string "????: {PLAYER}, nicht wahr?\n"
	.string "Komm rein.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_2:
	.string "????: Hier ist HOCHRANGIGER RÜPEL\n"
	.string "{PLAYER}, Sir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_3:
	.string "Sir, dieser RÜPEL hat offiziell an vier\n"
	.string "Missionen teilgenommen und drei davon\l"
	.string "erfolgreich zum Abschluss gebracht.\p"
	.string "Er hat die KONSULIN auf EILAND FÜNF\n"
	.string "aufgehalten, bevor sie unseren\l"
	.string "geschäftlichen Interessen gefährlich\l"
	.string "werden konnte, spielte eine\l"
	.string "entscheidende Rolle im Diebstahl von\l"
	.string "BILLs Patent, welches unsere\l"
	.string "Kommunikation im Allgemeinen\l"
	.string "exponentiell verbessert hat und er war\l"
	.string "es, der, gemeinsam mit dem HOCHRANGIGEN\l"
	.string "RÜPEL ANDRA, die wertvolle Phiole vom\l"
	.string "KAPITÄN der M.S. ANNE gestohlen hat {PAUSE 15}…{PAUSE 15}$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_3.1:
	.string "Seine einzige Niederlage erlitt er gegen\n"
	.string "diesen MYSTERIÖSEN TRAINER aus\l"
	.string "ALABASTIA im MONDBERG Fiasko. Und\l"
	.string "soweit ich weiß, war er der einzige\l"
	.string "RÜPEL, der sich nicht durch dessen\l"
	.string "überwältigende Macht hat\l"
	.string "einschüchtern lassen, und stattdessen\l"
	.string "bis zum bitteren Ende gekämpft hat.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_4:
	.string "GIOVANNI: Eine ausgezeichnete\n"
	.string "Zusammenfassung, LANCE. Danke.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_5:
	.string "Wie du sehen kannst, {PLAYER},\n"
	.string "überlässt TEAM ROCKET nichts dem\l"
	.string "Zufall. Jede Handlung ist ein Zahnrad im\l"
	.string "Getriebe dieser großartigen\l"
	.string "Organisation. Wir analysieren jedes\l"
	.string "einzelne Mitglied in unserer\l"
	.string "Organisation sorgfältig, um fair\l"
	.string "einschätzen zu können, welche Position\l"
	.string "am besten zu ihnen passt.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_6:
	.string "Du stammst also von EILAND FÜNF ab {PAUSE 15}…{PAUSE 15}\n"
	.string "Viele der Dinge, die du hier in KANTO\n"
	.string "gesehen hast, müssen dir seltsam\l"
	.string "vorkommen. Ich versichere dir, dass es\l"
	.string "eine Region ist, die es wert ist,\l"
	.string "erkundet zu werden. Sie ist voller\l"
	.string "legendärer Stätten, starker POKéMON\l"
	.string "und birgt eine einzigartige,\l"
	.string "faszinierende Geschichte. Die Menschen\l"
	.string "jedoch {PAUSE 25}…{PAUSE 25} Nun, das ist eine andere Sache.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7:
	.string "Als ROCKET RÜPEL hast du die Aufgabe,\n"
	.string "POKéMON und Wertgegenstände zu\l"
	.string "stehlen, um damit unseren Geldfluss\l"
	.string "auszugleichen.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7.1:
	.string "Das ist die Aufgabe von gut 90 % der\n"
	.string "ROCKETs. Eine Aufgabe, die, wie ich\l"
	.string "zugeben muss, nicht gerade moralisch,\l"
	.string "aber äußerst notwendig ist.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_8:
	.string "Aber jetzt, wo du und ANDRA zu\n"
	.string "HOCHRANGIGEN RÜPELN befördert wurden,\l"
	.string "steht ihr über diesen Missionen.\p"
	.string "Von nun an, werdet ihr an Operationen\n"
	.string "beteiligt sein, die von entscheidender\l"
	.string "Natur für die langfristige Zukunft von\l"
	.string "TEAM ROCKET sind.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_9:
	.string "Das bedeutet auch, dass ihr Zugang zu\n"
	.string "Informationen über den wahren Zweck\l"
	.string "unserer Organisation, der aktuellen\l"
	.string "Lage KANTOs und der wahren Geschichte\l"
	.string "dieser Region erhalten werdet.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_10:
	.string "Aber dafür ist es noch zu früh. Ich\n"
	.string "erwarte von dir, dass du deine\l"
	.string "Fähigkeiten unter meinem Kommando\l"
	.string "schärfst und weiterentwickelst.\p"
	.string "Erkunde weiter die Region und nimm alles\n"
	.string "in dich auf, was sie zu bieten hat.\l"
	.string "Wenn der Zeitpunkt gekommen ist, werden\l"
	.string "wir, Andra eingeschlossen, ein sehr\l"
	.string "wichtiges Gespräch führen.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
	.string "Damit hätten wir den ersten Punkt\n"
	.string "geklärt. Kommen wir jetzt zum Kern des\l"
	.string "Zweiten. Du musst mir alles erzählen,\l"
	.string "was du von dem MYSTERIÖSEN TRAINER\l"
	.string "weißt.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11.1:
	.string "Jede Einzelheit könnte entscheidend\n"
	.string "sein. Du hast am Längsten gegen ihn auf\l"
	.string "dem MONDBERG durchgehalten.\p"
	.string "Ich erwarte dementsprechend einen\n"
	.string "vollständigen Bericht über seine\l"
	.string "POKéMON, Items, Kampfstil, Aussehen\l"
	.string "und möglichen Schwächen. Wie schon\l"
	.string "gesagt, zählt jede Einzelheit.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
	.string "GIOVANNI: {PAUSE 25}…{PAUSE 25} …{PAUSE 25} Verstehe. Er ist kein\n"
	.string "gewöhnlicher Trainer. Ein GLUTEXO ist\l"
	.string "kein POKéMON, dass man einfach so im\l"
	.string "hohen Gras findet. Nur die Elite der\l"
	.string "Region hat Zugriff auf dieses Exemplar,\l"
	.string "vor allem nachdem sie nach dem Großen\l"
	.string "Krieg aus der Wildnis verschwunden\l"
	.string "sind.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12.1:
	.string "Die Tatsache, dass er einen POKéDEX bei\n"
	.string "sich trägt, deutet auf etwas\l"
	.string "Bedeutenderes hin. Dieser Junge stammt\l"
	.string "aller Wahrscheinlichkeit nach aus\l"
	.string "ALABASTIA. Sein Team ist viel zu stark\l"
	.string "für jemanden mit so wenig Erfahrung,\l"
	.string "wenn ich mir anschaue, dass ihn sein\l"
	.string "Abenteuer, mit aller Wahrscheinlichkeit,\l"
	.string "bisher nur von ALABASTIA bis zum\l"
	.string "MONDBERG geführt hat. Das ist nicht nur\l"
	.string "reines Talent. Da steckt mehr dahinter.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13:
	.string "Du denkst vielleicht, dass ein Trainer\n"
	.string "von so einem Kaliber unbesiegbar ist.\p"
	.string "Ja, er ist eine Bedrohung.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_13.1:
	.string "Aber glaube mir, wenn ich dir sage, dass\n"
	.string "KANTO zu viel umfasst, als dass man es\l"
	.string "nur in Gestalt eines einzigen Trainers\l"
	.string "definieren könnte. Wie stark er auch\l"
	.string "sein mag - niemand, und ich meine\l"
	.string "niemand im wahrsten Sinne des Wortes,\l"
	.string "ist unbesiegbar.\p"
	.string "Jeder hat eine Schwäche und jeder\n"
	.string "kann gestürzt werden.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13.2:
	.string "Je weiter du in unserer Organisation\n"
	.string "aufsteigst, desto mehr wirst du\l"
	.string "erkennen, wie weit du über deine\l"
	.string "aktuellen Grenzen hinausgehen kannst.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_14:
	.string "Das wäre alles, was es zu diesem\n"
	.string "mysteriösen Trainer zu besprechen\l"
	.string "gibt. Lass uns jetzt zum dritten und\l"
	.string "letzten Grund kommen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_1_Texto_15:
	.string "RÜPEL: Entschuldigen Sie, Sir.\p"
	.string "Aber der ARENALEITER aus FUCHSANIA\n"
	.string "CITY möchte Sie umgehend sprechen.\p"
	.string "Er sagt, es sei dringend.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_16:
.string "GIOVANNI: Lass ihn herein.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_17:
	.string "Ich hoffe, es ist wichtig, KOGA.\p"
	.string "Du unterbrichst gerade mein\n"
	.string "Treffen mit Rekrut {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_18:
.string "KOGA: Hast du es noch nicht gehört?\p"
	.string "Ein KANGAMA wurde in den Tiefen\n"
	.string "des FELSTUNNEL gesichtet!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_19:
.string "GIOVANNI: Fahre fort.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20:
	.string "KOGA: Wenn das stimmt, könnte die\n"
	.string "SAFARI-ZONE eine enorme Zahl an\l"
	.string "Besuchern verlieren, weil dann plötzlich\l"
	.string "jeder anfängt, loszuziehen, um dieses\l"
	.string "seltene Weibchen-KANGAMA selbst zu\l"
	.string "fangen!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.1:
	.string "Wir verkaufen der Öffentlichkeit die\n"
	.string "SAFARI-ZONE als einen einzigartigen\l"
	.string "Ort - als den de facto einzigen Ort, an\l"
	.string "dem bestimmte POKéMON gefangen werden\l"
	.string "können! Wir haben KANGAMA zum\l"
	.string "Aushängeschild unserer Flora und Fauna\l"
	.string "gemacht.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.2:
	.string "Wir haben behauptet, es existiere dort\n"
	.string "nur wegen unserer gezielten Art des\l"
	.string "Züchtens! Es kann nicht einfach aus\l"
	.string "dem Nichts irgendwo anders auftauchen!\p"
	.string "Jemand muss ein gefangenes KANGAMA\n"
	.string "aus unserer SAFARI-ZONE dort\l"
	.string "freigelassen haben!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21:
	.string "KOGA: Giovanni. Dir gehören 20% der\n"
	.string "Anteile der SAFARI-ZONE! Ich bin nicht\l"
	.string "nur hier, um dich darüber zu informieren,\l"
	.string "sondern auch, um dich darum zu bitten,\l"
	.string "diese Situation unter Kontrolle zu\l"
	.string "bringen.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21.1:
	.string "Wenn sich dieses Gerücht als wahr\n"
	.string "erweisen sollte, wären unsere Verluste\l"
	.string "katastrophal! Das Bild von der\l"
	.string "SAFARI-ZONE, als ein Ort mit exklusiven\l"
	.string "POKéMON, wäre ruiniert!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22:
	.string "GIOVANNI: Ich verstehe Koga. TEAM\n"
	.string "ROCKET wird sich darum kümmern, keine\l"
	.string "Sorge. Aber du kennst bereits meine\l"
	.string "Gedanken zur SAFARI-ZONE.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22.1:
	.string "Einst war sie eine großartige\n"
	.string "Investition, doch geht es mit ihr seit\l"
	.string "einiger Zeit bergab. Trotz der\l"
	.string "inzwischen lächerlich niedrigen\l"
	.string "Eintrittspreise schwindet das\l"
	.string "Interesse der Leute zusehends.\p"
	.string "Die Behebung dieses Problems wird\n"
	.string "das Unvermeidliche nur hinauszögern.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_22.2:
	.string "Ich denke, dass sie im Laufe der\n"
	.string "nächsten drei Jahre endgültig dicht\l"
	.string "gemacht wird. Aber solange wir ihr Ende\l"
	.string "noch hinauszögern können, lässt sich\l"
	.string "mit ihr immer noch Geld machen.\p"
	.string "Millionen, um genau zu sein.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_23:
.string "KOGA: Dann zähle ich auf dich.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_24:
	.string "GIOVANNI: Niemand, der nicht zu TEAM\n"
	.string "ROCKET gehört, wird den Ort mit einem\l"
	.string "KANGAMA verlassen. Falls sich da\l"
	.string "überhaupt eines aufhält.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_25:
	.string "KOGA: Ich werde ein Auge auf die\n"
	.string "Nachrichten haben. Wir müssen dieses\l"
	.string "Problem schnellstens lösen!\p"
	.string "Bald wird es dort vor Schaulustigen nur\n"
	.string "so wimmeln, die darauf hoffen, dieses\l"
	.string "seltene POKéMON fangen zu können!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_26:
	.string "GIOVANNI: Das wäre alles KOGA. Ich\n"
	.string "werde dich über die Sache informieren,\l"
	.string "wenn sie erledigt ist.\p"
	.string "Wenn du mich entschuldigen würdest,\n"
	.string "ich habe ein Gespräch zu beenden.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_27:
.string "KOGA: {PAUSE 15}… {PAUSE 15}…{PAUSE 15}\p"
	.string "Lang lebe das alte KANTO!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_28:
	.string "GIOVANNI: Kurzfristige Planänderung,\n"
	.string "{PLAYER}. Du hast KOGAs Anliegen\l"
	.string "gehört. Deine Mission lautet nun, jeden\l"
	.string "Zentimeter des FELSTUNNELs nach\l"
	.string "diesem angeblichen KANGAMA zu\l"
	.string "durchsuchen. Vernichte sämtliche\l"
	.string "Hinweise, die darauf hindeuten könnten,\l"
	.string "dass sich dort jemals ein KANGAMA\l"
	.string "aufgehalten hat!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_29:
	.string "Um den FELSTUNNEL zu erreichen, musst\n"
	.string "du zuerst den Tunnelpfad östlich von\l"
	.string "PRISMANIA nehmen. Geh von dort aus\l"
	.string "direkt nach LAVANDIA. Von dort aus\l"
	.string "liegt der FELSTUNNEL gleich nördlich.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30:
	.string "Das ist alles, {PLAYER}.\p"
	.string "Falls dieses KANGAMA wirklich existiert,\n"
	.string "fange es und bringe es als Beweis\l"
	.string "hierher.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30.1:
	.string "Ach ja. Eine Sache noch. Halte dich vom\n"
	.string "POKéMON-TURM fern. Ich möchte dort\l"
	.string "niemanden von TEAM ROCKET sehen.\p"
	.string "Zumindest noch nicht. Ist das klar?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_31:
    .string "GIOVANNI: Dann mal los!$"


RocketHideout_4F_Giovanni_Mision_1_move_1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2.1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


RocketHideout_4F_Giovanni_Mision_1_move_3:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_4:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_6:
delay_8
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_7:
delay_8
walk_slow_right
delay_16
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_9:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_slow_left
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_12:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_1_move_13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto::
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2 MSGBOX_AUTOCLOSE
delay 10
showmoneybox 0, 0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 95000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1, MSGBOX_DEFAULT
givemon SPECIES_KABUTO, 28, ITEM_HARD_STONE
waitfanfare
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 8
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SILPH_SCOPE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3 MSGBOX_DEFAULT
waitfanfare
delay 30
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 8
delay 15
fadedefaultbgm
delay 55
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 44
release
end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5:
delay_8
face_right
delay_16
delay_8
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4:
delay_8
walk_slow_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_slow_right
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3:
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1:
	.string "Ach {PLAYER}. Perfektes Timing. Man\n"
	.string "hat mich bereits darüber informiert, wie\l"
	.string "geschickt du diesem Schnorrer das\l"
	.string "KANGAMA entrissen hast.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2:
	.string "Mir ist schon zu Ohren gekommen, dass\n"
	.string "dieser STREBER in der Vergangenheit\l"
	.string "bereits derartige Situationen zu\l"
	.string "seinem Vorteil genutzt hat.\p"
	.string "Wie beispielsweise am MONDBERG.\p"
	.string "Das ist nicht das erste Mal, dass er\n"
	.string "uns Probleme bereitet. Er ist ein\l"
	.string "Aasfresser, besessen von seltenen\l"
	.string "POKéMON und bereit alles zu tun, um sie\l"
	.string "in seine Finger zu bekommen - ohne\l"
	.string "Rücksicht auf Verluste. Er ist wie BILL,\l"
	.string "nur ohne den Reichtum.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1:
	.string "Ich bin froh, dass du diesen Feigling im\n"
	.string "Namen von TEAM ROCKET in die Schranken\l"
	.string "gewiesen hast. Dass es dir nebenbei\l"
	.string "auch noch gelungen ist, dieses KANGAMA\l"
	.string "zu fangen, wird natürlich nicht\l"
	.string "unbelohnt bleiben.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3:
	.string "Du erhältst 95.000¥!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4:
	.string "GIOVANNI: Und das war noch nicht alles.\n"
	.string "Zur Feier deines Sieges über diesen\l"
	.string "Schwindler, belohnt dich TEAM ROCKET\l"
	.string "zusätzlich noch mit einem KABUTO!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5:
	.string "Genau genommen erhältst du das\n"
	.string "DOMFOSSIL zurück, welches dir der\l"
	.string "STREBER auf dem MONDBERG abgezockt\l"
	.string "hat. Mit Zinsen. Nun als KABUTO\l"
	.string "wiederbelebt und auf Level 28\l"
	.string "trainiert, wenn ich mich nicht täusche.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1:
	.string "LANCE!\p"
	.string "Überreiche {PLAYER} das KABUTO!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6:
.string "LANCE: Mit Vergnügen, Sir.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1:
.string "Du erhältst ein LEVEL 28 KABUTO!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7:
	.string "GIOVANNI: Technisch gesehen ist\n"
	.string "dieses Fossil auf dem Schwarzmarkt\l"
	.string "Hunderttausende von POKÉDOLLAR wert.\p"
	.string "Aber deine Vergangenheit damit macht\n"
	.string "es noch viel wertvoller {PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8:
	.string "Das hätten wir also geklärt. Wir werden\n"
	.string "dieses KANGAMA untersuchen, um ihre\l"
	.string "wahre Herkunft herauszufinden. Es ist\l"
	.string "mir immer noch ein Rätsel, wie so ein\l"
	.string "POKéMON an diesem Ort gelandet ist.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9:
	.string "{PLAYER}. In deiner letzten Mission\n"
	.string "habe ich dir befohlen, dich vom\l"
	.string "POKéMON-TURM fernzuhalten. Dieser Ort\l"
	.string "ist nämlich eng mit unserer nächsten\l"
	.string "Operation verknüpft {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10:
	.string "Ich werde eine komplette Einheit zum\n"
	.string "POKEMON-TURM schicken, mit dem Ziel, so\l"
	.string "viele TRAGOSSO-Schädel wie möglich zu\l"
	.string "sammeln. Diese haben einen enormen Wert\l"
	.string "auf dem Schwarzmarkt.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11:
	.string "Jedoch dient es uns lediglich als\n"
	.string "Tarnung. Als ein Ablenkungsmanöver, auf\l"
	.string "das sich alle in Anbetracht unseres\l"
	.string "Rufes stürzen werden.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1:
	.string "Das eigentliche Ziel ist, MR. FUJI zum\n"
	.string "richtigen Zeitpunkt in den\l"
	.string "POKéMON-TURM zu locken {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12:
	.string "FUJI war einer der brillantesten\n"
	.string "Wissenschaftler, die wir je hatten.\p"
	.string "Er ist der Einzige, der die entschei-\n"
	.string "denden Details zu unserem größten\l"
	.string "Projekt kennt, {PLAYER}!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13:
.string "Deine Mission ist einfach, {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1:
	.string "Während LANCE im obersten Stockwerk\n"
	.string "des Turms in Ruhe seinen Tätigkeiten\l"
	.string "nachgeht, wirst du an der Treppe, die\l"
	.string "dorthin führt, Schmiere stehen.\p"
	.string "So kannst du beide warnen, wenn\n"
	.string "etwas geschieht.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2:
	.string "Darüber hinaus trägst du Sorge, dass\n"
	.string "das Gespräch privat bleibt. Ich möchte,\l"
	.string "dass niemand zur obersten Etage des\l"
	.string "Turms gelangt, bis die Besprechung dort\l"
	.string "beendet ist. Habe ich mich klar\l"
	.string "ausgedrückt?$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14:
	.string "Gut. Bei dieser Mission darf absolut\n"
	.string "nichts schiefgehen, {PLAYER}.\p"
	.string "Deswegen wirst du mit einem weiteren\n"
	.string "TRAINER zusammenarbeiten. Meines\l"
	.string "Wissens kennt ihr euch bereits {PAUSE 5}...{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15:
	.string "GIOVANNI: Na, überrascht? BLAU hat\n"
	.string "beschlossen, sich mit uns zu verbünden,\l"
	.string "als er die NUGGET-BRÜCKE auf ROUTE 24\l"
	.string "überquert hat. Basierend auf seinem\l"
	.string "Auftritt bei BILL und der Tatsache,\l"
	.string "dass er sowohl EICHs Enkel als auch\l"
	.string "ROTs Rivale ist, ist er meiner\l"
	.string "bescheidenen Meinung nach der\l"
	.string "perfekte Kandidat, um als unser\l"
	.string "Doppelagent zu agieren.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16:
	.string "BLAU: Du bist also der ROCKET, gegen\n"
	.string "den ich auf der M.S. ANNE gekämpft habe.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1:
	.string "Du versteckst deine besten Männer gut,\n"
	.string "GIOVANNI. Du solltest mehr Rüpel wie\l"
	.string "{PLAYER} auf den normalen ROUTEN\l"
	.string "einsetzen. Es ist kaum möglich, gut zu\l"
	.string "trainieren, wenn dort nur Normalos\l"
	.string "rumlaufen.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17:
	.string "GIOVANNI: Du hast noch viel zu lernen,\n"
	.string "Jungspund. Wenn du allen Ernstes\l"
	.string "glaubst, dass die ARENALEITER die\l"
	.string "besten Trainer in hier sind, lass mich\l"
	.string "dir versichern, dass dem nicht so ist.\l"
	.string "BLAU.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1:
	.string "traducir$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2:
	.string "traducir$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.3:
	.string "BLAU: Mmm{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18:
	.string "Der Einzige, der diesen Plan\n"
	.string "durchkreuzen könnte, ist ROT. Meinen\l"
	.string "Quellen zufolge befindet er sich auf\l"
	.string "ROUTE 10, am Fuße des FELSTUNNELs.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1:
	.string "Basierend auf seiner raschen\n"
	.string "Entwicklung, scheint es, als würde er\l"
	.string "zur selben Zeit in LAVANDIA\l"
	.string "auftauchen, wenn unsere Mission im\l"
	.string "Gange ist. Für den Fall, dass er den\l"
	.string "POKéMON-TURM betritt, dürfen wir nicht\l"
	.string "zulassen, dass sich das Fiasko vom\l"
	.string "MONDBERG wiederholt.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2:
	.string "Hier kommst du ins Spiel BLAU.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19:
	.string "Du wirst informiert, sobald ROT\n"
	.string "auftaucht und dich in den unteren\l"
	.string "Stockwerken des TURMS aufhalten.\p"
	.string "Sobald er erscheint, wirst du so tun, als\n"
	.string "wärst du nur zufällig dort, ohne TEAM\l"
	.string "ROCKET zu erwähnen. Versuche ihn zum\l"
	.string "Umkehren zu bewegen.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1:
	.string "Erzähle ihm von dem GEIST des TURMS,\n"
	.string "für den man einen SILPH SCOPE benötigt\l"
	.string "und so weiter. Beschließt er dennoch\l"
	.string "weiterzugehen, benachrichtige\l"
	.string "umgehend {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2:
	.string "traducir$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3:
.string "{PLAYER} erhält ein SILPH SCOPE!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20:
	.string "{PLAYER}! {PAUSE 35} Sinne nicht auf Rache\n"
	.string "gegen ROT. Wenn du über sein\l"
	.string "unmittelbares Eintreffen\l"
	.string "benachrichtigt wirst, gehe direkt in\l"
	.string "das oberste Stockwerk und informiere\l"
	.string "LANCE. Nur in diesem Fall ist es dir\l"
	.string "erlaubt, ihr Treffen zu stören!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21:
	.string "BLAU: Warum machst du dir so viele\n"
	.string "Sorgen um ROT! Wenn {PLAYER} und ich\l"
	.string "uns zusammentun, würden wir ihn\l"
	.string "fertigmachen!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22:
	.string "GIOVANNI: Ach, denkst du das? In\n"
	.string "Wahrheit war bisher niemand auch nur\l"
	.string "annähernd in der Lage, ihn zu besiegen.\p"
	.string "Gegen solch eine unerreichbare Stärke\n"
	.string "können wir uns lediglich der List\l"
	.string "bedienen, um ihn dorthin zu locken, wo\l"
	.string "wir ihn haben wollen - und so etwas\l"
	.string "Zeit gewinnen.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23:
.string "BLAU: Tss!\p"
	.string "Ich werde ROT schon bald besiegen!\p"
	.string "Du wirst schon sehen!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24:
	.string "GIOVANNI: Er mag ein bisschen arrogant\n"
	.string "und überheblich sein, aber in ihm steckt\l"
	.string "großes Potenzial {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1:
	.string "LANCE wird sich bald mit dir treffen,\n"
	.string "{PLAYER}. Mach dich mit den anderen\l"
	.string "RÜPELN auf den Weg, um die TRAGOSSO zu\l"
	.string "ködern und somit FUJI in die Falle zu\l"
	.string "locken.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2:
	 .string "Ich verlasse mich auf dich!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5:
walk_right
walk_up
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_izq::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_der::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo::
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5
waitmovement 0x0
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9
waitmovement 0x0
delay 20
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 20
playse SE_SELECT
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 60
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
playse SE_EXIT
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
delay 20
playse SE_EXIT
addobject 10
setobjectxy 10, 20, 9
waitse
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14
waitmovement 0x0
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 6
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 54
warp MAP_ROCKET_HIDEOUT_5F, 2, 2
release
end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2:
jump_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1:
	.string "WARNUNG AN ALLE RÜPEL! Ein mysteriöser\n"
	.string "Trainer, der wie ROT gekleidet ist, hat\l"
	.string "unsere BASIS infiltriert!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2:
	.string "GIOVANNI: Ach. Wir müssen ihn nicht\n"
	.string "weiter beschatten, um Informationen\l"
	.string "über ihn zu gewinnen. Er hat von sich\l"
	.string "aus die Höhle des Löwen betreten.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3:
	.string "RÜPEL: Ihre Befehle, Sir?! Wir fallen\n"
	.string "alle wie die Fliegen gegen die Macht\l"
	.string "seiner POKéMON!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4:
	.string "LANCE: Ruft alle verfügbaren\n"
	.string "HOCHRANGIGEN RÜPEL und OFFIZIERE in\l"
	.string "der BASIS zusammen! Verteidigt unseren\l"
	.string "ANFÜHRER! Falls die Situation es\l"
	.string "erfordert, greift auf unseren\l"
	.string "speziellen Exemplaren-Ra…$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: STOP!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
	.string "GIOVANNI: Das werden wir nicht\n"
	.string "tun, LANCE.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTON: LANCE: A-{PAUSE 25}…{PAUSE 25}aber,{PAUSE 25}…{PAUSE 25} {PAUSE 15}…{PAUSE 15} Sir{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
	.string "GIOVANNI: Ich möchte, dass sich\n"
	.string "sämtliche OFFIZIERE und HOCHRANGIGEN\l"
	.string "RÜPEL in der\l"
	.string "UNTERIRDISCHEN-ROCKET-BASIS\l"
	.string "einfinden.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1:
	.string "UND DAS SOFORT!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
	.string "RÜPEL: Jawohl, Sir!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10:
	.string "GIOVANNI: LANCE. Liefere mir\n"
	.string "schnellstmöglich detaillierte\l"
	.string "Informationen über das Team, welches\l"
	.string "ERIKA, die ARENALEITERIN von\l"
	.string "PRISMANIA CITY, aktuell verwendet -\l"
	.string "einschließlich der Levels ihrer POKéMON.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11:
.string "LANCE: Wird sofort erledigt, Sir!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12:
	.string "LANCE: ERIKA verwendet aktuell ein\n"
	.string "Level 29 SARZENIA, ein Level 24 TANGELA\l"
	.string "und ein Level 29 GIFLOR.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13:
	.string "GIOVANNI: In Ordnung. Welches Level\n"
	.string "hatte doch gleich das verschollene\l"
	.string "KANGAMA, das {PLAYER} im FELSTUNNEL\l"
	.string "gefangen hat?$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14:
.string "LANCE: Level 29, Sir.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15:
	.string "GIOVANNI: Nun gut. Das passt perfekt\n"
	.string "zu dem Bild, dass dieser jämmerliche\l"
	.string "Trainer von jemanden wie mir haben\l"
	.string "könnte. Bring mir dieses KANGAMA und\l"
	.string "noch zwei weitere, etwas schwächere\l"
	.string "Pokemon. Ein ONYX und RIHORN sollten\l"
	.string "passen.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16:
.string "LANCE: Sofort, Sir!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17:
	.string "GIOVANNI: Spiele niemals mit offenen\n"
	.string "Karten gegen deinen Feind, {PLAYER}.\p"
	.string "Er wird niemals in der Lage sein, gegen\n"
	.string "eine Stärke zu bestehen, die ihm\l"
	.string "unbekannt ist - ganz gleich, wie stark\l"
	.string "er auch sein mag.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1:
	.string "Sobald er sie sieht und begreift, wird\n"
	.string "es bereits zu spät sein, da ihm nicht\l"
	.string "genug Zeit bleiben wird, sich der\l"
	.string "Situation anzupassen. Er wird niemals\l"
	.string "unser Level erreichen, falls er weiter\l"
	.string "gegen die mittelmäßigen Trainer kämpft,\l"
	.string "von denen es in den Städten und\l"
	.string "Dörfern dieser Region wimmelt.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
.string "LANCE: Hier sind sie, Sir!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
	.string "GIOVANNI: Eine Sache noch, {PLAYER}.\n"
	.string "Ich möchte nicht, dass du eine Torheit\l"
	.string "begehst. Mir ist bewusst, dass du, jetzt\l"
	.string "wo du stärker bist, unbedingt gegen ROT\l"
	.string "kämpfen willst, nachdem er dich auf dem\l"
	.string "MONDBERG besiegt hat.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1:
	.string "Aber das ist nicht der richtige\n"
	.string "Zeitpunkt. Unsere Priorität liegt darin,\l"
	.string "ihn im Dunklen zu lassen, bis wir hinter\l"
	.string "seine wahren Absichten kommen {PAUSE 5}...{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20:
	.string "RÜPEL: Sir, er hat soeben den\n"
	.string "AUFZUGSCHLÜSSEL von einem Rüpel\l"
	.string "bekommen. Es gibt nun nichts mehr, was\l"
	.string "ihn davon abhält, zu Ihnen zu gelangen.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21:
	.string "GIOVANNI: Sehr gut. {PLAYER}! LANCE!\p"
	.string "Macht, dass ihr in die unterirdische\n"
	.string "Basis kommt! Ihr werdet benachrichtigt,\l"
	.string "wenn die ganze Sache hier vorbei ist.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22:
	.string "LANCE: Sir, ja, Sir!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1:
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5:
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_left
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9:
walk_right
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11:
walk_left
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_right
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13:
delay_8
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_left
walk_left
face_up
delay_16
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14:
walk_right
walk_right
walk_down
walk_in_place_left
step_end


RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17:
walk_right
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18:
walk_down
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Izq::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Der::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda::
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
delay 10
showmoneybox 0, 0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 135000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_CUBONE, 20, ITEM_THICK_CLUB
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2
waitmovement 0x0
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 45
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 52
release
end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
delay_16
walk_in_place_down
delay_8
step_end

RocketHideout_4F_PC::
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout_4F_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_4F_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 60
release
end

RocketHideout_4F_Warp_No::
release
end

RocketHideout_4F_PC_Texto_1:
	.string "Dieser Computer scheint eine äußerst\n"
	.string "wichtige Funktion zu erfüllen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Warp_Text_YesNo:
	.string "Möchtest du den Zugang zum geheimen\n"
	.string "Eingang aktivieren?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1:
	.string "GIOVANNI: Ausgezeichnete Arbeit,\n"
	.string "ANDRA! Diese DRATINIS und SICHLORS\l"
	.string "werden zu Wucherpreisen in unserer\l"
	.string "SPIELHALLE verkauft werden.\p"
	.string "Hier ist deine Belohnung.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
	.string "Du bist also auch zurück von deiner\n"
	.string "Mission, {PLAYER}! Du hast wie\l"
	.string "angeordnet dafür gesorgt, dass FUJI\l"
	.string "und LANCE sich in Ruhe unter vier Augen\l"
	.string "unterhalten konnten, was entscheidend\l"
	.string "für unseren Erfolg war.\p"
	.string "Dafür gebührt dir eine Belohnung.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
	.string "Du erhältst 135.000¥!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
	.string "GIOVANNI: Zudem werde ich dich im Namen\n"
	.string "von TEAM ROCKET mit einem der TRAGOSSO\l"
	.string "entlohnen, welche wir vom POKéMON-TURM\l"
	.string "gestohlen haben. Das ist jedoch kein\l"
	.string "gewöhnliches Exemplar. Dieses TRAGOSSO\l"
	.string "trägt einen KAMPFKNOCHEN, der seinen\l"
	.string "physischen Angriff verdoppelt, wenn es\l"
	.string "sich zu einem KNOGGA weiterentwickelt.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1:
	.string "Es ist meiner bescheidenen Meinung\n"
	.string "nach eine angemessene Belohnung für\l"
	.string "denjenigen, der das KNOGGA von FUJI\l"
	.string "besiegt hat. Nicht wahr?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "DU ERHÄLTST EIN LEVEL 20 TRAGOSSO!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
	.string "GIOVANNI: Zum Abschluss wird es dich\n"
	.string "mit Sicherheit interessieren zu\l"
	.string "erfahren, dass wir nach der\l"
	.string "Untersuchung des KANGAMA, dass du im\l"
	.string "FELSTUNNEL gefunden hast,\l"
	.string "herausgefunden haben, dass seine\l"
	.string "Physiologie der Evolutionslinie von\l"
	.string "TRAGOSSO und KNOGGA sehr ähnlich ist.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
	.string "GIOVANNI: In der SAFARI-ZONE wachsen\n"
	.string "sämtliche KANGAMA sorglos auf und ihre\l"
	.string "Jungen entfalten sich immer bis zu\l"
	.string "diesem Punkt…$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1:
	.string "Die TRAGOSSO-KNOGGA Evolutionslinie\n"
	.string "ist uns ein Rätsel. Ein TRAGOSSO\l"
	.string "entsteht, wenn es den Schädel seiner\l"
	.string "verstorbenen Mutter an sich nimmt.$"
	
RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2:
	.string "Was würde jedoch geschehen, wenn\n"
	.string "die Mutter nicht stirbt?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3:
	.string "Unseren Studien zufolge würde\n"
	.string "es ein KANGAMA werden.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
	.string "Der beste Weg, diese Theorie zu\n"
	.string "beweisen, wäre, wenn der POKéMON-TURM\l"
	.string "nicht länger existieren würde, was die\l"
	.string "dort lebenden TRAGOSSO dazu zwingen\l"
	.string "würde, in Massen in den FELSTUNNEL\l"
	.string "umzusiedeln - und dann zu beobachten,\l"
	.string "was passiert.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
	.string "Dieser Tunnel ist ein für ihre\n"
	.string "Fortpflanzung geeigneterer Ort,\l"
	.string "als es dieser düstere Turm ist.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1:
	.string "Wenn mit der Zeit immer mehr KANGAMA\n"
	.string "auftauchen würden, wäre dies ein Beweis\l"
	.string "für die Verbindung zwischen diesen\l"
	.string "Spezies.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2:
	.string "traducir$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
	.string "GIOVANNI: Unabhängig von der aktuellen\n"
	.string "Situation, möchte ich diese Möglichkeit\l"
	.string "nutzen, um eure Leistungen zu würdigen.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1:
    .string "ANDRA: Worauf beziehen Sie sich?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2:
	.string "Ihr beide habt in unserem Namen sechs\n"
	.string "Missionen abgeschlossen, von denen\l"
	.string "fünf ein erfolgreiches Ende gefunden\l"
	.string "haben. Nicht viele können das nach so\l"
	.string "kurzer Zeit von sich behaupten.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
	.string "GIOVANNI: Jedoch ist den Mitgliedern\n"
	.string "von TEAM ROCKET, wie ihr schon selbst\l"
	.string "bemerkt habt, der Zutritt zu allen\l"
	.string "öffentlichen POKéMON-SUPERMÄRKTEN\l"
	.string "strengstens verboten - das\l"
	.string "PRISMANIA-EINKAUFSZENTRUM\l"
	.string "eingeschlossen.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
	.string "Aber das ist nichts, was euch\n"
	.string "beunruhigen sollte. Ich bin mir sicher,\l"
	.string "dass zwei Trainer wie ihr begierig\l"
	.string "darauf seid, euer hart verdientes Geld\l"
	.string "in die Verbesserung eures TEAMs zu\l"
	.string "investieren.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
	.string "Ihr müsst wissen, dass wir in dieser\n"
	.string "Organisation nie etwas dem Zufall\l"
	.string "überlassen. Vor langer Zeit haben wir\l"
	.string "ein riesiges privates Handelsnetzwerk\l"
	.string "aufgebaut, welches ein größeres\l"
	.string "Angebot an Waren aufweist, als es das\l"
	.string "der Blutegel des INDIGO-PLATEAUs tut.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
	.string "Bei eurer Ankunft habe ich euch beiden\n"
	.string "versichert, dass ich euch in einige\l"
	.string "Geheimnisse unserer Organisation\l"
	.string "einweihen werde - unter der Bedingung,\l"
	.string "dass ihr euch als würdig erweist.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1:
	.string "Nun {PAUSE 25}…{PAUSE 25} jetzt werde ich euch eines\n"
	.string "davon offenbaren.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2:
	.string "LANCE!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
    .string "LANCE: Ja, Sir. $"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
	.string "ANDRA: Wow! Eine geheime Basis, die\n"
	.string "unter einer anderen versteckt ist?\p"
	.string "Das ist genial!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
	.string "GIOVANNI: In der Tat, ANDRA.\n"
	.string "Tatsächlich befindet sich unten all\l"
	.string "das, was wirklich von Bedeutung ist.\p"
	.string "Viele unterliegen dem Irrtum, dass die\n"
	.string "SPIELHALLE eine Tarnung für diese\l"
	.string "Basis ist.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1:
	.string "Sie irren sich … In Wahrheit dient diese\n"
	.string "Basis als Deckmantel für eine Andere -\l"
	.string "die sich unter uns befindet.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
	.string "Ich hoffe, dass ihr euch der Bedeutung\n"
	.string "dessen bewusst seid, was ich euch\l"
	.string "soeben offenbart habe. Wenn die\l"
	.string "Behörden auch nur den Hauch einer\l"
	.string "Ahnung hätten, was wir hier haben,\l"
	.string "würden sie nicht zögern, ihre gesamte\l"
	.string "Macht einzusetzen, um uns zu\l"
	.string "vernichten.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
	.string "GIOVANNI: Lediglich unseren\n"
	.string "Wissenschaftlern und HOCHRANGIGEN\l"
	.string "Mitgliedern ist der Zutritt zur\l"
	.string "unterirdischen Basis gestattet. Ihr\l"
	.string "könnt sie jederzeit betreten. Nutzt\l"
	.string "dafür einfach den Laptop von LANCE.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
	.string "GIOVANNI: Das wäre alles für den\n"
	.string "Moment. In der Zeit, in der ihr keinen\l"
	.string "Missionen nachgeht, könnt ihr eure\l"
	.string "Freizeit dazu nutzen, die\l"
	.string "-UNTERIRDISCHE TEAM ROCKET BASIS-\l"
	.string "zu erkunden.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1:
	.string "So könnt ihr euch einen Eindruck davon\n"
	.string "verschaffen, an was wir wirklich\l"
	.string "arbeiten.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
	.string "ANDRA: Es ist uns eine große Ehre, dass\n"
	.string "Sie uns so sehr vertrauen, GIOVANNI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
	.string "ANDRA: Ich schätze, wir sehen uns\n"
	.string "unten, {PLAYER}. Ich werde es\l"
	.string "genießen, jeden einzelnen Meter eines\l"
	.string "der geheimsten und vertraulichsten\l"
	.string "Orte der Region zu erkunden!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4:
walk_in_place_left
walk_in_place_down
step_end


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11:
walk_fast_down
walk_fast_down
walk_fast_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12:
walk_fast_down
walk_fast_right
walk_fast_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Izq::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance_Der::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance::
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1 MSGBOX_AUTOCLOSE
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
delay 15
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 11
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1
waitmovement 0x0
delay 10
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 3
setvar VAR_UNUSED_0x40F7, 804
warpsilent MAP_ROCKET_HIDEOUT_4F, 19, 8


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1:
walk_in_place_down
step_end


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2:
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1:
delay_8
delay_8
face_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4:
walk_up
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end



RocketHideout_4F_Disguise_Player::
delay 10
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 1000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_ARTICUNO, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_ZAPDOS, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21 MSGBOX_DEFAULT
givemon SPECIES_MOLTRES, 60, ITEM_LUM_BERRY
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RAINBOW_PASS
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_676
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 95
release
end

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1:
.string "????: You no longer have the upper hand,\n"
	.string "LANCE, now you better calm down.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1:
.string "????: But{PAUSE 15}…{PAUSE 15} Now you come to me to say{PAUSE 15}…{PAUSE 15}\p"
	.string "That I take this in the most fair way\n"
	.string "possible, hearing your demands.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2:
.string "GIOVANNI: If you want to keep some of\n"
	.string "your privileges and power, you shall\l"
	.string "accept those conditions…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3:
.string "Cause the resignation of RED from the\n"
	.string "CHAMPION title, and wipe him from the\l"
	.string "map, I want that crazy OAK experiment\l"
	.string "out of the game; take him to an isolated\l"
	.string "place and tell the media he is realizing\l"
	.string "some sort of secret training.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4:
    .string "With that you will maintain BLUE as\n"
	.string "the current CHAMPION, he will inform\l"
	.string "us of any possible misstep that you\l"
	.string "could try to take against us, LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1:
	.string "For your own sake, LANCE, I hope\n"
	.string "you won't do anything stupid.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5:
.string "You will confirm the definitive\n"
	.string "dissolution of TEAM ROCKET, that\l"
	.string "implies that every real ROCKET will be\l"
	.string "seen as another citizen, and will be\l"
	.string "allowed to enter every store in KANTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6:
.string "LANCE: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7:
.string "GIOVANNI: And lastly, you will reduce\n"
	.string "all the tax pressure from SILPH and the\l"
	.string "other small businesses of KANTO; the\l"
	.string "time of leeching off the citizens and\l"
	.string "keeping them in camouflaged slave\l"
	.string "conditions is over, maybe with that,\l"
	.string "they'll start to like you a little.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8:
    .string "That's all, and remember, any misconduct,\n"
	.string "a little hint that you'll try something,\l"
	.string "and the entire KANTO region will\l"
	.string "know what happened in the HALL OF FAME.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1:
	.string "Now get off my sight!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9:
.string "PROTON: SIR, do you believe we are doing\n"
	.string "the right thing negotiating with people\l"
	.string "like that? Shouldn't we…?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10:
.string "GIOVANNI: I know, PROTON, but KANTO is\n"
	.string "not prepared to assimilate everything\l"
	.string "that has happen, everything it needs is\l"
	.string "to reach stability again, not another\l"
	.string "revolution that brings more chaos into\l"
	.string "the region. For the moment, LANCE is\l"
	.string "tied up, and with these conditions,\l"
	.string "everything will tend to get better…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11:
.string "Ah, {PLAYER}!\p"
	.string "You proved to be an excellent TRAINER\n"
	.string "in the HALL OF FAME, one of those who\l"
	.string "appear each 50 years, only someone\l"
	.string "like that could have stopped a team as\l"
	.string "powerful as the one LANCE had.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12:
.string "Luckily, we brought back RAIKOU, ENTEI\n"
	.string "and SUICUNE to their natural habitats\l"
	.string "in JOHTO, let's hope there isn't another\l"
	.string "maniac like LANCE with the intention\l"
	.string "and power to re'capture them…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13:
.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
    .string "We have fulfilled the purpose of why\n"
	.string "TEAM ROCKET was created, {PLAYER}.\p"
	.string "You were fundamental in saving KANTO\n"
	.string "from the hands of LANCE, along with\l"
	.string "ARCHER and ANDRA, you have reached the\l"
	.string "highest rank I can give to any member\l"
	.string "of TEAM ROCKET in KANTO:\p"
	.string "TEAM ROCKET ADMINISTRATOR.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15:
.string "{PLAYER} HAS BEEN PROMOTED TO\n"
	.string "TEAM ROCKET ADMINISTRATOR!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16:
    .string "TEAM ROCKET is your home, {PLAYER}.\p"
	.string "You have completely gained that\n"
	.string "rank, this is your reward for your\l"
	.string "achievement in the POKÉMON LEAGUE,\l"
	.string "consider it as a symbolic payment, what\l"
	.string "you did in the HALL OF FAME can't be\l"
	.string "paid with just money.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17:
.string "YOU INVOICED ¥1,000,000!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18:
.string "Not only that, but as you know, we\n"
	.string "managed to create a stable duplicate\l"
	.string "of the DNA of ARTICUNO, ZAPDOS and\l"
	.string "MOLTRES to create identical clones in a\l"
	.string "successful way, what else than to offer\l"
	.string "the first copies to the one who made\l"
	.string "them possible.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19:
.string "YOU RECEIVED A LV.60 ARTICUNO!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20:
.string "YOU RECEIVED A LV.60 ZAPDOS!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21:
.string "YOU RECEIVED A LV.60 MOLTRES!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22:
.string "Using them or not on your team, is\n"
	.string "a personal decision; you proved to\l"
	.string "have more than enough level for\l"
	.string "managing SACRED POKÉMON like these.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23:
.string "Now, we can focus on the second reason\n"
	.string "of the foundation of TEAM ROCKET:\p"
	.string "Learn about the POKÉMON world and its\n"
	.string "mysteries, explore the limits of its\l"
	.string "potential and reach where no one else\l"
	.string "has ever reached.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24:
.string "Of course, we still have MEWTWO as a\n"
	.string "milestone; still is a danger that\l"
	.string "we have to take care of.\p"
	.string "But{PAUSE 15}…{PAUSE 15} I don't want to involve you in\n"
	.string "a mission like that for the moment.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25:
.string "After what you have done, you deserve\n"
	.string "to take some good vacations, give you\l"
	.string "the time to celebrate and assimilate\l"
	.string "everything that you have achieved,\l"
	.string "before you have to go again in new\l"
	.string "challenges, even harder ones.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26:
.string "That's why I want you to travel through\n"
	.string "SEVII ISLANDS, your natal place, and\l"
	.string "explore them in peace. I've heard\l"
	.string "there are good TRAINERS, as well as\l"
	.string "kind of POKÉMON very similar to JOHTO ones.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "With this, you can travel legally by\n"
	.string "taking the VERMILION FERRY.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28:
.string "{PLAYER} received the RAINBOW PASS.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29:
.string "SEVII ISLANDS are famous for its ruins\n"
	.string "in SIX and SEVEN ISLANDS, dated 1500\l"
	.string "years of age, they have a lot of\l"
	.string "similarities with RUINS OF ALPH of\l"
	.string "JOHTO, it is believed they keep some\l"
	.string "sort of secret.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30:
.string "Do you remember the jar you stole\n"
	.string "from the CAPTAIN of the SS.ANNE?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31:
.string "We believe its content comes from the\n"
	.string "ruins, I won't tell you directly to go\l"
	.string "investigate as another mission, I just\l"
	.string "inform you of it, if you feel curious,\l"
	.string "you can go look at the ruins and try to\l"
	.string "find something.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32:
.string "That's all for the moment, {PLAYER}, we\n"
	.string "will notify you when we have news of\l"
	.string "MEWTWO or any other singular POKÉMON.\p"
	.string "SEVII ISLANDS and its mysteries are\n"
	.string "waiting, go and enjoy your vacations.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4:
walk_left
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5:
walk_right
delay_16
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6:
walk_left
delay_16
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7:
face_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10:
face_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13:
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14:
walk_right
delay_16
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 12
applymovement 12, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_POKE_MANSION
msgbox PokemonTower5F_Escena_4_Blaine_Texto_4 MSGBOX_AUTOCLOSE
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11_1 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_7
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_16 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_8
waitmovement 0x0
playse SE_BREAKABLE_DOOR
waitse
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_9
waitmovement 0x0
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_19 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_10
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_21 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_11
waitmovement 0x0
delay 15
msgbox PokemonTower5F_Escena_4_Blaine_Texto_22 MSGBOX_AUTOCLOSE
fadedefaultbgm
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_12
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_23 MSGBOX_AUTOCLOSE
delay 40
msgbox PokemonTower5F_Escena_4_Blaine_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_13
waitmovement 0x0
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
opendoor 20, 23
waitdooranim
applymovement 12, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 12
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 47
warpsilent MAP_POKEMON_TOWER_5F, 18, 9
release
end

PokemonTower5F_Escena_4_Blaine_Texto_1:
	.string "RÜPEL: Der ARENALEITER der\n"
	.string "ZINNOBERINSEL ist eingetroffen, SIR!$"

PokemonTower5F_Escena_4_Blaine_Texto_2:
.string "GIOVANNI: Lass ihn herein.$"

PokemonTower5F_Escena_4_Blaine_Texto_3:
	.string "PYRO: Du wolltest mich sprechen,\n"
	.string "GIOVANNI?$"

PokemonTower5F_Escena_4_Blaine_Texto_4:
	.string "GIOVANNI: Ich werde es kurz machen,\n"
	.string "PYRO. Ich fürchte, ich muss die\l"
	.string "Finanzierung für die Massenproduktion\l"
	.string "von PORYGON einstellen.$"

PokemonTower5F_Escena_4_Blaine_Texto_5:
	.string "PYRO: W-Was! {PAUSE 25}…{PAUSE 25} A-Aber warum???$"

PokemonTower5F_Escena_4_Blaine_Texto_6:
	.string "GIOVANNI: Du bist nicht das Problem.\p"
	.string "Du hast gute Arbeit geleistet. PORYGON\n"
	.string "sind, wie dir bekannt ist, Luxusartikel,\l"
	.string "die sich nur die Wenigsten leisten\l"
	.string "können. Wir verdienen zwar ein kleines\l"
	.string "Vermögen mit jedem, das wir verkaufen,\l"
	.string "doch auf der anderen Seite stapeln sie\l"
	.string "sich in unseren Lagern.$"

PokemonTower5F_Escena_4_Blaine_Texto_7:
	.string "Die Konsequenz, die sich daraus ergibt,\n"
	.string "ist, dass wir um eine Preissenkung nicht\l"
	.string "herumkommen. Hinzu kommt, dass die\l"
	.string "Produktionskosten immens sind. Daher\l"
	.string "bleibt uns nichts anderes übrig, als das\l"
	.string "Angebot der Nachfrage anzupassen.\p"
	.string "KANTO ist schlicht und einfach ein zu\n"
	.string "kleiner Markt für dieses Geschäft, was,\l"
	.string "um ehrlich zu sein, von Anfang an\l"
	.string "abzusehen war.$"

PokemonTower5F_Escena_4_Blaine_Texto_8:
	.string "Nichtsdestotrotz {PAUSE 25}…{PAUSE 25} bin ich mir der\n"
	.string "Tatsache bewusst, dass die SILPH\l"
	.string "COMPANY eine verbesserte Version von\l"
	.string "PORYGON entwickelt hat.\p"
	.string "Die Produktionskosten für das neue\n"
	.string "PORYGON2 sind jedoch dreimal so hoch\l"
	.string "wie für ein gewöhnliches PORYGON,\l"
	.string "weshalb es nicht als Produkt für die\l"
	.string "breite Masse taugt.$"

PokemonTower5F_Escena_4_Blaine_Texto_9:
	.string "Sein Wert in Kämpfen hingegen … darüber\n"
	.string "reden wir ein andermal. Es scheint so,\l"
	.string "als wäre PORYGON2 nicht seine finale\l"
	.string "Entwicklungsstufe. Sein Potenzial\l"
	.string "könnte darüber hinausgehen.$"

PokemonTower5F_Escena_4_Blaine_Texto_10:
	.string "Daher biete ich dir als\n"
	.string "Wiedergutmachung für die Streichung\l"
	.string "der finanziellen Mittel an, hier mit\l"
	.string "unseren Wissenschaftlern\l"
	.string "zusammenzuarbeiten. Allerdings nicht\l"
	.string "nur an einer stärkeren Version von\l"
	.string "PORYGON, sondern auch von NIDOK{PAUSE 5}…{PAUSE 5}$"

PokemonTower5F_Escena_4_Blaine_Texto_11:
	.string "PYRO: Du weißt ganz genau, GIOVANNI,\n"
	.string "dass nichts unser einstiges Projekt\l"
	.string "übertreffen wird.$"

PokemonTower5F_Escena_4_Blaine_Texto_11_1:
	.string "GIOVANNI: Ich wäre bereits zufrieden,\n"
	.string "wenn es ein gewöhnliches LEGENDÄRES\l"
	.string "POKéMON an Stärke übertrifft.$"

PokemonTower5F_Escena_4_Blaine_Texto_12:
	.string "PYRO: Natürlich! Wenn es nur das ist!\n"
	.string "Wie wäre es, wenn es gleich drei\l"
	.string "übertrifft?$"

PokemonTower5F_Escena_4_Blaine_Texto_13:
	.string "GIOVANNI: Nimmst du nun mein Angebot\n"
	.string "an oder nicht? Ein Wissenschaftler von\l"
	.string "deinem Kaliber verdient es, eine zweite\l"
	.string "Chance zu bekommen. Anders als beim\l"
	.string "alten FUJI lodert in dir nach wie vor\l"
	.string "das Feuer, noch Größeres zu erreichen.$"

PokemonTower5F_Escena_4_Blaine_Texto_14:
	.string "PYRO: Ich muss dein Angebot leider\n"
	.string "ablehnen, GIOVANNI. Die Katastrophe\l"
	.string "mit MEWTU war sogar für mich zu viel.\p"
	.string "Beantworte mir diese eine Frage. Worin\n"
	.string "liegt der Sinn, etwas so Mächtiges zu\l"
	.string "erschaffen, wenn du es nicht\l"
	.string "kontrollieren kannst?$"

PokemonTower5F_Escena_4_Blaine_Texto_15:
	.string "GIOVANNI: Genau deswegen machen wir\n"
	.string "das hier, PYRO. Damit wir aus unseren\l"
	.string "vergangenen Fehlern lernen und an\l"
	.string "ihnen wachsen können. Ich versichere\l"
	.string "dir, dass sich das Fiasko von damals\l"
	.string "nicht wiederholen wird.\p"
	.string "Nicht mit der heutigen Technologie.$"

PokemonTower5F_Escena_4_Blaine_Texto_16:
	.string "Siehst du es denn nicht, PYRO? Die\n"
	.string "Götter der POKéMON-Welt haben uns aus\l"
	.string "einem ganz bestimmten Grund verschont.\p"
	.string "Wir hätten während der großen\n"
	.string "Vertuschungsaktion SIEGFRIED zum\l"
	.string "Opfer fallen und den Rest unseres\l"
	.string "Lebens im Gefängnis versauern können.\p"
	.string "Doch dank wem auch immer kannst du\n"
	.string "nach wie vor in Freiheit auf der\l"
	.string "ZINNOBERINSEL leben und ich weiter\l"
	.string "im Verborgenen agieren.$"

PokemonTower5F_Escena_4_Blaine_Texto_17:
	.string "PYRO: Vergeben?! Wir sind ihnen\n"
	.string "schutzlos ausgeliefert! Wenn sie deine\l"
	.string "Basis hier finden, könnten sie sie ohne\l"
	.string "Probleme bis auf ihre Grundmauern\l"
	.string "niederbrennen. Dasselbe gilt für mein\l"
	.string "Labor, wenn sie dort morgen spontan\l"
	.string "eine Inspektion durchführen würden!\p"
	.string "Wir sind Geächtete!$"

PokemonTower5F_Escena_4_Blaine_Texto_18:
	.string "GIOVANNI: Nicht unser Bestes zu geben,\n"
	.string "um diese Region voranzubringen, wäre\l"
	.string "eine Verschwendung dieses Geschenkes,\l"
	.string "PYRO.$"

PokemonTower5F_Escena_4_Blaine_Texto_19:
.string "BLAINE: {PAUSE 20} …{PAUSE 20}$"

PokemonTower5F_Escena_4_Blaine_Texto_20:
	.string "Ich muss mir darüber erst einmal\n"
	.string "Gedanken machen, GIOVANNI.$"

PokemonTower5F_Escena_4_Blaine_Texto_21:
	.string "GIOVANNI: Ich werde hier auf dich\n"
	.string "warten, PYRO. Es ist noch nicht zu spät,\l"
	.string "dein Magnum Opus zu verwirklichen.$"

PokemonTower5F_Escena_4_Blaine_Texto_22:
	.string "PYRO: Diese Möglichkeit wird es bis zu\n"
	.string "meinem letzten Atemzug immer geben.$"

PokemonTower5F_Escena_4_Blaine_Texto_23:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

PokemonTower5F_Escena_4_Blaine_Texto_24:
	.string "Was für ein Glück, dass du nicht weißt,\n"
	.string "warum ich meinen Posten auf der\l"
	.string "ZINNOBERINSEL behalten durfte,\l"
	.string "Ex-CHAMPION.$"

PokemonTower5F_Escena_4_Blaine_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_2:
face_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_3:
walk_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_4:
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_5:
face_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_6:
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_7:
face_right
step_end

PokemonTower5F_Escena_4_Blaine_Move_8:
walk_fast_left
walk_fast_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_9:
delay_8
walk_slow_down
delay_8
step_end

PokemonTower5F_Escena_4_Blaine_Move_10:
walk_up
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_11:
face_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

PokemonTower5F_Escena_4_Blaine_Move_13:
walk_right
face_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas::
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 10
addobject 13
addobject 14
addobject 15
addobject 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_3
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
delay 60
playse SE_PIN
applymovement 13, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 14, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 15, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
applymovement 14, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
applymovement 15, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideout_4F_Escena_Castigo_Reclutas_Move_1.1
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 13
removeobject 14
removeobject 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setvar VAR_UNUSED_0x40F7, 59
warpsilent MAP_VIRIDIAN_CITY, 21, 2
release
end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1:
jump_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1:
	.string "LANCE: Hier sind die REKRUTEN der\n"
	.string "LAVANDIA-Mission, mit denen Sie sich\l"
	.string "unterhalten wollten, Sir.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: Und?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
	.string "Und {PAUSE 15}…{PAUSE 15} und was genau, Sir?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
	.string "GIOVANNI: Ich dachte, ich hatte mich\n"
	.string "deutlich ausgedrückt, als ich euch eure\l"
	.string "Aufgaben für die Mission beim\l"
	.string "POKéMON-TURM mitgeteilt habe.\p"
	.string "Statt wie angeordnet nur Schädel von\n"
	.string "TRAGOSSO zu beschaffen und etwas Lärm\l"
	.string "zu machen, seid ihr weiter gegangen.\p"
	.string "Warum?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
	.string "RÜPEL: Es war nur nen Versehen, Sir. Uns\n"
	.string "war langweilig, aber die Mutter von\l"
	.string "einem der TRAGOSSO hat das Ganze 'nen\l"
	.string "bisschen zu Ernst genommen und {PAUSE 25}…{PAUSE 25} wir\l"
	.string "naja konnten sie nicht in Schach\l"
	.string "halten.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5:
	.string "GIOVANNI: Habt ihr Idioten auch nur\n"
	.string "den Hauch einer Ahnung, was für einen\l"
	.string "Schaden ihr mit eurer Aktion\l"
	.string "angerichtet habt?! Seid ihr euch\l"
	.string "bewusst, dass ihr nicht nur FUJI, mit\l"
	.string "dem wir in Verhandlungen standen,\l"
	.string "sondern auch der gesamten Bevölkerung\l"
	.string "von KANTO einen sehr schlechten\l"
	.string "Eindruck von uns vermittelt habt?! Als\l"
	.string "wären die Hetzkampagnen der Regierung\l"
	.string "unter SIEGFRIEDs Führung noch nicht\l"
	.string "genug gewesen, weiß jetzt auch noch\l"
	.string "jeder in Kanto, was TEAM ROCKET in\l"
	.string "LAVANDIA getan hat!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6:
	.string "Euer Mangel an gesundem\n"
	.string "Menschenverstand und Moral verdient\l"
	.string "die Höchststrafe!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7:
	.string "Glaubt mir, wenn ich euch sage, dass,\n"
	.string "wenn ich euch euren Fehlern\l"
	.string "entsprechend bestrafen würde, die APs\l"
	.string "sämtlicher Attacken meines NIDOKING\l"
	.string "am Ende bei Null wären!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8:
.string "RÜPEL: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9:
.string "GIOVANNI: Nichtsdestotrotz {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10:
	.string "Wir sind keine Mörder, auch wenn eure\n"
	.string "jüngsten Taten etwas Anderes vermuten\l"
	.string "lassen. Ich biete euch die Möglichkeit,\l"
	.string "euch zu rehabilitieren.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11:
	.string "Als Wiedergutmachung für den Schaden,\n"
	.string "den ihr angerichtet habt, werdet ihr 70\l"
	.string "% eures Gehaltes an die\l"
	.string "Wohltätigkeitsorganisation in\l"
	.string "LAVANDIA spenden. Währenddessen wird\l"
	.string "TEAM ROCKET für eure Grundbedürfnisse\l"
	.string "aufkommen - solange ihr euch an euren\l"
	.string "Teil der Abmachung hält, versteht sich.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12:
	.string "RÜPEL: V{PAUSE 25}-{PAUSE 25}vielen Dank für die zweite\n"
	.string "Chance, S{PAUSE 25}-{PAUSE 25}Sir. Wir schwören, dass Sie es\l"
	.string "nicht bereuen werden Ihr NIDO{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13:
	.string "GIOVANNI: Ich bin noch nicht fertig.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14:
.string "RÜPEL: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
	.string "GIOVANNI: Südlich von LAVANDIA ist die\n"
	.string "Errichtung eines großen unterirdischen\l"
	.string "FRIEDHOFs geplant. FUJI wird jede Hilfe\l"
	.string "brauchen, die er kriegen kann und\l"
	.string "besagte Hilfe werdet ihr ihm anbieten.\p"
	.string "Ihr werdet alles tun, was er verlangt!\p"
	.string "Neben euren Pflichten bei TEAM ROCKET,\n"
	.string "werdet ihr diesem Projekt eure Freizeit\l"
	.string "widmen.\p"
	.string "Irgendwelche Einwände?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "RÜPEL: Sir, nein, Sir!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17:
	.string "GIOVANNI: Das ist eure Chance. Ein Jahr\n"
	.string "voller finanzieller und freizeitlicher\l"
	.string "Einschränkungen, als Preis für die\l"
	.string "Wiedergutmachung eurer Schandtaten.\l"
	.string "Ich warne euch im Voraus.\p"
	.string "Beim geringsten Fehltritt werdet ihr\n"
	.string "für immer von Team Rocket verbannt {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18:
	.string "Wenn ihr euch jedoch als standhaft\n"
	.string "erweist, wird euch nicht nur vergeben,\l"
	.string "sondern ihr werdet auch zu\l"
	.string "HOCHRANGIGEN RÜPELN befördert, da ihr\l"
	.string "Stärke, Ausdauer und vor allem die viel\l"
	.string "zu selten vorhandene Fähigkeit\l"
	.string "bewiesen habt, aus euren Fehlern\l"
	.string "lernen zu können.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19:
	.string "Und nun macht, dass ihr mir aus den\n"
	.string "Augen kommt.\p"
	.string "Der ERSTE TAG eurer Sühne\n"
	.string "beginnt jetzt!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20:
.string "RÜPEL: Sir, ja, Sir!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21:
	.string "GIOVANNI: Diese verdammte\n"
	.string "Unachtsamkeit! Jetzt wird jeder in ganz\l"
	.string "KANTO Boshaftigkeit mit Unwissenheit\l"
	.string "verwechseln {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22:
	.string "LANCE: Genau das ist der Grund, warum\n"
	.string "die UNTERIRDISCHE BASIS nur wenigen\l"
	.string "zugänglich ist.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23:
.string "LANCE: {PAUSE 15}Aber {PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24:
	.string "GIOVANNI: Was beschäftigt dich, LANCE?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25:
	.string "LANCE: Eine Sache erschließt sich mir\n"
	.string "nicht. Warum wird ein großer\l"
	.string "unterirdischer FRIEDHOF in LAVANDIA\l"
	.string "gebaut? Ist der POKéMON-TURM nicht\l"
	.string "groß genug, um alle Gräber zu\l"
	.string "beherbergen?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26:
	.string "GIOVANNI: Es ist noch zu früh, um das\n"
	.string "zu besprechen, LANCE. Viel zu früh. Aber\l"
	.string "der Zeitpunkt wird kommen …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Move_1:
walk_in_place_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_1.1:
walk_fast_up
walk_fast_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2:
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_3:
face_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_5:
walk_fast_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6:
walk_fast_down
walk_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_7:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideout_4F_Escena_Motoristas::
lock
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_1
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_6
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_10
waitmovement 0x0
waitse
addobject 16
applymovement 16, RocketHideout_4F_Escena_Motoristas_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_12
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_19 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_ROUTE105_STATE, 6
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_NUEVA_839
warpsilent MAP_VIAS_TREN2, 65, 11
release
end

RocketHideout_4F_Escena_Motoristas_Move_12:
face_right
step_end

RocketHideout_4F_Escena_Motoristas_Move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_10:
emote_exclamation_mark
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_9:
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_8:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_7:
face_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_6:
emote_exclamation_mark
step_end

RocketHideout_4F_Escena_Motoristas_Move_5:
walk_slow_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_4:
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_3:
face_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_2:
walk_in_place_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Texto_1.1:
.string "GIOVANNI: Well?$"

RocketHideout_4F_Escena_Motoristas_Texto_1:
	.string "KOGA: It's irreversible, SAFARI ZONE\n"
	.string "will close its doors in the upcoming\l"
	.string "weeks.$"

RocketHideout_4F_Escena_Motoristas_Texto_2:
	.string "GIOVANNI: It was to be expected; now\n"
	.string "that the borders with JOHTO have\l"
	.string "opened, everyone will want to visit the\l"
	.string "neighboring region and its exotic\l"
	.string "POKÉMON.$"

RocketHideout_4F_Escena_Motoristas_Texto_3:
	.string "KOGA: Not to mention that more than\n"
	.string "one has already captured a KANGASKHAN\l"
	.string "in ROCK TUNNEL and made it public.$"

RocketHideout_4F_Escena_Motoristas_Texto_4:
	.string "GIOVANNI: The new times, KOGA, many\n"
	.string "things are going to change, not all for\l"
	.string "the better.$"

RocketHideout_4F_Escena_Motoristas_Texto_5:
	.string "Not even TEAM ROCKET escapes the\n"
	.string "changes, we have become great, so much\l"
	.string "so that it will be impossible to make\l"
	.string "everyone happy…$"

RocketHideout_4F_Escena_Motoristas_Texto_6:
.string "KOGA: Do you mean…?$"

RocketHideout_4F_Escena_Motoristas_Texto_7:
	.string "GIOVANNI: Yes, the close of the\n"
	.string "UNDERGROUND PATHS.$"

RocketHideout_4F_Escena_Motoristas_Texto_8:
	.string "In the past, they served as refuge\n"
	.string "during the war, and more recently, they\l"
	.string "turned out to be a great trafficking\l"
	.string "network for us.$"

RocketHideout_4F_Escena_Motoristas_Texto_9:
	.string "Thanks to them, we obtained huge\n"
	.string "revenues from products imported by sea\l"
	.string "from our SEVII ISLANDS base, something\l"
	.string "that was optimized via teleportation\l"
	.string "thanks to BILL's patent.$"

RocketHideout_4F_Escena_Motoristas_Texto_10:
	.string "Nowadays, with the union between KANTO\n"
	.string "Y JOHTO, they are nothing more than a\l"
	.string "burden for business between regions. I\l"
	.string "have already received pressure from\l"
	.string "the RADIO TOWER and the MAGNETRAIN to\l"
	.string "have them closed, and that's what will\l"
	.string "be done.$"

RocketHideout_4F_Escena_Motoristas_Texto_11:
.string "KOGA: But…$"

RocketHideout_4F_Escena_Motoristas_Texto_12:
	.string "GIOVANNI: TEAM ROCKET has grown. In\n"
	.string "those days, they were of great help to\l"
	.string "keep us afloat, but today we can do\l"
	.string "without them.$"

RocketHideout_4F_Escena_Motoristas_Texto_13:
	.string "KOGA: What about the BIKERS? Their\n"
	.string "main role was to sell imported goods,\l"
	.string "the roads were like their second hom…$"

RocketHideout_4F_Escena_Motoristas_Texto_14:
.string "PETREL: Did you call me, BOSS?$"

RocketHideout_4F_Escena_Motoristas_Texto_15:
	.string "GIOVANNI: That's right, both of you\n"
	.string "have been the link between TEAM ROCKET\l"
	.string "and the BIKERS.$"

RocketHideout_4F_Escena_Motoristas_Texto_16:
	.string "Therefore, I ask you to communicate to\n"
	.string "them the tough decision of closing the\l"
	.string "roads. We are going to rid ourselves of\l"
	.string "their services, but TEAM ROCKET does\l"
	.string "not forget.$"

RocketHideout_4F_Escena_Motoristas_Texto_17:
	.string "Despite becoming obsolete in the\n"
	.string "current KANTO, any BIKER who wishes to\l"
	.string "become a member of TEAM ROCKET and\l"
	.string "work in our various bases and branches\l"
	.string "will be more than welcome.$"

RocketHideout_4F_Escena_Motoristas_Texto_18:
	.string "With that, we wrap up this matter. KOGA,\n"
	.string "PETREL{PAUSE 15}…{PAUSE 15} that's all.$"

RocketHideout_4F_Escena_Motoristas_Texto_19:
.string "PETREL: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout_4F_Dialogo_Proton::
lock
faceplayer
msgbox RocketHideout_4F_Dialogo_Proton_Texto_1 MSGBOX_NPC
msgbox RocketHideout_4F_Dialogo_Proton_Texto_2 MSGBOX_NPC
release
end

RocketHideout_4F_Dialogo_Proton_Texto_2:
	.string "Obwohl ich immer noch ein OFFIZIER bin,\n"
	.string "bin ich GIOVANNIs engster Vertrauter.\p"
	.string "LAMBDA und ATLAS hingegen sind\n"
	.string "ADMINISTRATOREN, wobei ATLAS\l"
	.string "CHEF-ADMINISTRATOR ist, da er die\l"
	.string "Leitung unserer SEVII-Niederlassung\l"
	.string "innehat.$"


RocketHideout_4F_Dialogo_Proton_Texto_1:
	.string "Die Hierarchie unserer Organisation\n"
	.string "besteht aus mehreren Stufen.\p"
	.string "Die unterste Stufe bildet der Rüpel.\n"
	.string "Über ihm befindet sich der HOCHRANGIGE\l"
	.string "RÜPEL, dann der OFFIZIER, dann der\l"
	.string "ADMINISTRATOR, dann der\l"
	.string "CHEF-ADMINISTRATOR und ganz oben\l"
	.string "schließlich unser BOSS.$"



