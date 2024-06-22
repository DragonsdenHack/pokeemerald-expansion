Cave_Regigigas_S3_2_MapScripts::
	.byte 0

Cave_Regigigas_S3_2_Ruby::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S3_2_Ruby_Move_1
msgbox Cave_Regigigas_S3_2_Ruby_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S3_2_Ruby_Move_2
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S3_2_Ruby_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_3
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S3_2_Ruby_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_4
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_674, Cave_Regigigas_S3_2_Ruby_Texto_7
delay 15
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_5
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S3_2_Ruby_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_6
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_3
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_6
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S3_2_Ruby_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S3_2_Ruby_Move_6
waitmovement 0x0
setflag FLAG_HOENN_60
setvar VAR_UNUSED_0x40F8, 17
release
end

Cave_Regigigas_S3_2_Ruby_Move_7:
face_right
delay 16
delay 16
walk_in_place_right
delay_16
step_end

Cave_Regigigas_S3_2_Ruby_Move_5:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

Cave_Regigigas_S3_2_Ruby_Move_6:
face_up
step_end

Cave_Regigigas_S3_2_Ruby_Move_4:
walk_right
step_end

Cave_Regigigas_S3_2_Ruby_Move_3:
face_right
step_end

Cave_Regigigas_S3_2_Ruby_Move_1:
walk_in_place_down
step_end

Cave_Regigigas_S3_2_Ruby_Move_2:
delay_16
face_left
step_end

Cave_Regigigas_S3_2_Ruby_Texto_1:
	.string "¿No es fascinante?$"

Cave_Regigigas_S3_2_Ruby_Texto_2:
	.string "Ni en mis más descabelladas\n"
	.string "predicciones pude imaginar que un lugar\l"
	.string "así pudiera existir en HOENN.$"

Cave_Regigigas_S3_2_Ruby_Texto_3:
	.string "Y a pesar de ello… parece que aún solo\n"
	.string "estamos rascando en la superficie.$"

Cave_Regigigas_S3_2_Ruby_Texto_4:
	.string "De igual modo, puede que en su momento\n"
	.string "hiciera una predicción no muy acertada\l"
	.string "respecto a ti, ¿recuerdas nuestro\l"
	.string "encuentro en la CÁMARA de REGIROCK?$"

Cave_Regigigas_S3_2_Ruby_Texto_5:
	.string "… …$"

Cave_Regigigas_S3_2_Ruby_Texto_6:
	.string "Déjame comprobarlo.$"

Cave_Regigigas_S3_2_Ruby_Texto_7:
	.string "Parece que sí.$"

Cave_Regigigas_S3_2_Ruby_Texto_8:
	.string "Hmmmmm... Después de todo, el\n"
	.string "ADMIN.AMATISTA tenía razón.$"

Cave_Regigigas_S3_2_Ruby_Texto_9:
	.string "Si hay algo en la naturaleza que no\n"
	.string "entendemos, es muy probable que\l"
	.string "resulte lógico en un sentido más\l"
	.string "profundo que está más allá de nuestra\l"
	.string "comprensión.$"

Cave_Regigigas_S3_2_Ruby_Texto_10:
	.string "En cierto modo, lo mismo puede aplicar\n"
	.string "para las capacidades adquiridas que un\l"
	.string "ENTRENADOR puede alcanzar.$"

Cave_Regigigas_S3_2_Ruby_Texto_11:
	.string "Parece que la naturaleza de este lugar\n"
	.string "es incluso más antigua y sagrada que la\l"
	.string "de GROUDON y KYOGRE. ¿Quién lo iba a\l"
	.string "decir?$"

Cave_Regigigas_S3_2_Ruby_Texto_12:
	.string "Sigue tu camino, un alma inquieta como\n"
	.string "tú merece chocarse frente a un muro\l"
	.string "que también escape a su comprensión. Es\l"
	.string "más, puede que en el fondo sea lo que\l"
	.string "más deseas.$"

Cave_Regigigas_S3_2_Ruby_Despues::
lock
faceplayer
msgbox Cave_Regigigas_S3_2_Ruby_Texto_12 MSGBOX_AUTOCLOSE
release
end
