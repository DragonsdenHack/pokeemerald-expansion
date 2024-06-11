.set LOCALID_OWNER, 1

LilycoveCity_CoveLilyMotel_1F_MapScripts::
	.byte 0

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
	lockall
	playse SE_PIN
	applymovement LOCALID_OWNER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_OWNER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
	waitmovement 0
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
	waitmovement 0
	release
	end

LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
	walk_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
	face_down
	walk_down
	face_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
	.string	"Qué interesante: han duplicado\n"
	.string	"el número de clientes usando\l"
	.string	"POKéMON como reclamo.\p"
	.string	"Mmmm… Quizás debería escoger\n"
	.string	"un POKéMON como mascota del hostal.\p"
	.string	"Puede que así consiga que vengan\n"
	.string	"más huéspedes{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
	.string	"Oh, disculpa. Estaba viendo la tele\n"
	.string	"y no te he visto llegar.\p"
	.string	"Es que desde que llegó el EQUIPO\n"
	.string	"AQUA, no vienen turistas, así que\l"
	.string	"no esperaba a nadie{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
	.string	"¡Oye, quita de ahí, que no\n"
	.string	"eres transparente!$"

LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
	.string	"¡Increíble! ¿Me estás diciendo que un\n"
	.string	"POKéMON encontró un objeto perdido?\p"
	.string	"Qué interesante: si tuviéramos un\n"
	.string	"POKéMON tan listo como ése…,\p"
	.string	"¡recuperaríamos todo lo que perdieran\n"
	.string	"nuestros huéspedes!$"

LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
	.string	"Oh, disculpa. Estaba viendo la tele\n"
	.string	"y no te he visto llegar.\p"
	.string	"Me han dicho que alguien ha destrozado\n"
	.string	"la GUARIDA del EQUIPO AQUA.\p"
	.string	"Gracias a eso, la gente ha perdido el\n"
	.string	"miedo y acabo de recibir a un grupo.\p"
	.string	"Son todos de la misma empresa…\n"
	.string	"¿Cómo era? Ah, sí, GAME algo{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
	.string	"¡Increíble! ¿Me estás diciendo que un\n"
	.string	"POKéMON guardián pilló a un ladrón?\p"
	.string	"Qué interesante: si tuviéramos\n"
	.string	"un POKéMON tan fuerte como ése…,\p"
	.string	"¡podríamos ofrecer el mejor servicio\n"
	.string	"de seguridad a nuestros huéspedes!$"

LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
	.string	"Oh, disculpa. Estaba viendo la tele\n"
	.string	"y no te he visto llegar.\p"
	.string	"Ah, sí. Acaba de llegar un gran\n"
	.string	"grupo de huéspedes.\p"
	.string	"Pertenecen a la empresa GAME FREAK,\n"
	.string	"así que deben de crear videojuegos.\p"
	.string	"¡Huy, huy, creo que tengo que irme\n"
	.string	"a prepararles la cena!$"

LilycoveCity_Aquiles::
lock
msgbox LilycoveCity_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_682
clearflag FLAG_HOENN_681
setflag FLAG_HOENN_54
setvar VAR_UNUSED_0x40F8, 10
release
end

LilycoveCity_Aquiles_Texto_1:
	.string "ADM.TOLO: Es el lugar perfecto, señor.$"

LilycoveCity_Aquiles_Texto_2:
	.string "Tenemos todo listo para establecer\n"
	.string "nuestra base.$"

LilycoveCity_Aquiles_Texto_3:
	.string "AQUILES: ¡Buen trabajo, TOLO! ¡Desde\n"
	.string "ahí llevaremos a cabo toda la operación\l"
	.string "para despertar a KYOGRE!$"

LilycoveCity_Aquiles_Texto_4:
	.string "Le robaremos el submarino a ese\n"
	.string "estúpido CAP.BABOR, y frustraremos los\l"
	.string "planes de esos miserables que se hacen\l"
	.string "llamar EQUIPO MAGMA.$"

LilycoveCity_Aquiles_Texto_5:
	.string "Cuando obtengamos la ESFERA ROJA, ¡no\n"
	.string "les quedará más remedio que\l"
	.string "arrodillarse! ¡Jua, jua, jua!$"

