MahoganyTown_NinjaBaseS1_MapScripts::
	.byte 0

NinjaBaseS1_1::
end



NinjaBaseS1_2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_2:
.string "Me pregunto quién habrá sido el\n"
.string "bruto que ha dejado el sistema de\l"
.string "seguridad así.\l"
.string "Va a costarme horrores repararlo.$"



NinjaBaseS1_3::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_3:
.string "¿Desactivar la seguridad de la\n"
.string "base?\l"
.string "¡Ya me he encargado yo\l"
.string "personalmente de eliminar ese\l"
.string "sistema!\l"
.string "¡Si quieres llegar hasta el final\l"
.string "deberás de hacerlo sin trampas ni\l"
.string "ayudas!$"



NinjaBaseS1_4::
end



NinjaBaseS1_5::
end



NinjaBaseS1_6::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_6, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_6:
.string "¡Ahora sé por qué ocupa el lugar\n"
.string "que ocupa en el TEAM ROCKET, es\l"
.string "usted un ENTRENADOR excepcional\l"
.string "ADMIN.JEFE!$"



NinjaBaseS1_7::
end



NinjaBaseS1_8::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_8, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_8:
.string "Vamos a aprender mucho de esas\n"
.string "trampas utilizadas por los ninjas,\l"
.string "¡son muy del estilo ROCKET\l"
.string "también!$"



NinjaBaseS1_9::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_9, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_9:
.string "Los POKÉMON que habitan en el LAGO\n"
.string "DE LA FURIA van a ser a partir de\l"
.string "ahora unos más que interesantes\l"
.string "sujetos de estudio.$"



NinjaBaseS1_10::
end



NinjaBaseS1_11::
end



NinjaBaseS1_12::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_12, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_12:
.string "¡Es usted el mejor, señor!\n"
.string "¡Ni 20 ENTRENADORES juntos\l"
.string "pudieron pararle!$"



NinjaBaseS1_13::
end



NinjaBaseS1_14::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_14, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_14:
.string "¡Jah!\n"
.string "¡No pudieron hacer uso de nuestro\l"
.string "sistema de trampas POKÉMON!\l"
.string "¡Mira cómo explotan esos\l"
.string "KOFFING!$"



NinjaBaseS1_15::
end



NinjaBaseS1_16::
end



NinjaBaseS1_17::
end



NinjaBaseS1_18::
end



NinjaBaseS1_EventScript_Ladron::
	trainerbattle_single TRAINER_DREW, NinjaBaseS1_Text_LadronIntro, NinjaBaseS1_Text_LadronDefeated
	msgbox NinjaBaseS1_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS1_EventScript_Calvo::
	trainerbattle_single TRAINER_MYLES, NinjaBaseS1_Text_CalvoIntro, NinjaBaseS1_Text_CalvoDefeated
	msgbox NinjaBaseS1_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS1_Primera_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 1
addobject 5
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 1, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 5, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Primera_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 1
addobject 5
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 1, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 5, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Primera_Trampa::
msgbox NinjaBaseS1_Primera_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_STAN, NinjaBaseS1_Primera_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_STEVE_3, NinjaBaseS1_Primera_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 1
removeobject 5
fadescreen 0
release
end

NinjaBaseS1_Primera_Trampa_Texto_1:
.string "Otro iluso más que cae en la\n"
	.string "trampa.\l"
	.string "¡Vamos a echarte de aquí a\l"
	.string "patadas!$"

NinjaBaseS1_Primera_Trampa_Texto_2:
.string "Tenemos a un rebelde.$"

NinjaBaseS1_Primera_Trampa_Texto_3:
.string "Vas a caer, como todos.$"

NinjaBaseS1_Primera_Trampa_Texto_4:
.string "Esta base perteneció a mis\n"
	.string "antepasados, solo voy a recuperar\l"
	.string "lo que es mío, ¡aunque tenga que\l"
	.string "compartirlo!$"

NinjaBaseS1_Primera_Trampa_Texto_5:
.string "Estás atrapado.$"

NinjaBaseS1_Primera_Trampa_Texto_6:
.string "Nuestra seguridad es implacable,\n"
	.string "si quieres adentrarte en la base,\l"
	.string "deberás pagar el precio.$"

NinjaBaseS1_Primera_Trampa_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

NinjaBaseS1_Primera_Trampa_Move_2:
face_left
step_end

NinjaBaseS1_Primera_Trampa_Move_3:
walk_down
walk_in_place_left
step_end

NinjaBaseS1_Primera_Trampa_Move_4:
walk_down
walk_in_place_right
step_end

NinjaBaseS1_Primera_Trampa_Move_5:
face_right
step_end

NinjaBaseS1_Primera_Trampa_Move_3.1:
walk_in_place_left
step_end

NinjaBaseS1_Primera_Trampa_Move_4.1:
walk_in_place_right
step_end

NinjaBaseS1_Segunda_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 14
addobject 15
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 14, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 15, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Segunda_Trampa

NinjaBaseS1_Segunda_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 14
addobject 15
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 14, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 15, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Segunda_Trampa

NinjaBaseS1_Segunda_Trampa::
msgbox NinjaBaseS1_Segunda_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHAD, NinjaBaseS1_Segunda_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHEILA, NinjaBaseS1_Segunda_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 14
removeobject 15
fadescreen 0
release
end

NinjaBaseS1_Segunda_Trampa_Texto_1:
.string "¡Shuaaggh!\n"
	.string "¡Soy más rápido que el viento!$"

NinjaBaseS1_Segunda_Trampa_Texto_2:
.string "Creo que es hora de desaparecer.$"

NinjaBaseS1_Segunda_Trampa_Texto_3:
.string "No podrás invadir tú solo esta\n"
	.string "base, somos demasiados.$"

NinjaBaseS1_Segunda_Trampa_Texto_4:
.string "Parece que tendremos que sacarte\n"
	.string "de aquí por las malas.\l"
	.string "No hay problema, tenemos ya\l"
	.string "experiencia echando al TEAM\l"
	.string "ROCKET.$"

NinjaBaseS1_Segunda_Trampa_Texto_5:
.string "Estás atrapado.$"

NinjaBaseS1_Segunda_Trampa_Texto_6:
.string "Poco a poco vamos clavando en ti\n"
	.string "el veneno del desgaste, para\l"
	.string "cuando quieras llegar al final,\l"
	.string "solo tendremos que rematarte.$"

NinjaBaseS1_Tercera_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 10
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 10, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 4, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Tercera_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 10
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 10, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 4, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Tercera_Trampa

NinjaBaseS1_Tercera_Trampa::
msgbox NinjaBaseS1_Tercera_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHAD, NinjaBaseS1_Tercera_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHEILA, NinjaBaseS1_Tercera_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 10
removeobject 4
fadescreen 0
release
end

NinjaBaseS1_Tercera_Trampa_Texto_1:
.string "Las emboscadas son nuestra\n"
	.string "especialidad, ya te habrás dado\l"
	.string "cuenta.$"

NinjaBaseS1_Tercera_Trampa_Texto_2:
.string "¡Mis POKÉMON ninja!$"

NinjaBaseS1_Tercera_Trampa_Texto_3:
.string "Debería haber llevado algún\n"
	.string "POKÉMON con TÓXICO, así\l"
	.string "prolongaría aún más tu agonía.$"

NinjaBaseS1_Tercera_Trampa_Texto_4:
.string "El TEAM ROCKET ya es demasiado\n"
	.string "poderoso, ¿no podéis dejar un\l"
	.string "trozo del pastel para los demás?$"

NinjaBaseS1_Tercera_Trampa_Texto_5:
.string "Vamos a acabar contigo.$"

NinjaBaseS1_Tercera_Trampa_Texto_6:
.string "No podrás escapar de la telaraña\n"
	.string "que hemos tejido.$"

NinjaBaseS1_Cuarta_Trampa::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 16
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Cuarta_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_4, NinjaBaseS1_Cuarta_Trampa_Texto_2
msgbox NinjaBaseS1_Cuarta_Trampa_Texto_3 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 16
fadescreen 0
release
end

NinjaBaseS1_Cuarta_Trampa_Texto_1:
.string "¿Notas ya el cansancio?\n"
	.string "Pronto estarás suplicando para que\l"
	.string "te llevemos a un CENTRO POKÉMON.$"

NinjaBaseS1_Cuarta_Trampa_Texto_2:
.string "Sigue, sigue, mayor será tu caída.$"

NinjaBaseS1_Cuarta_Trampa_Texto_3:
.string "No tienes forma de curar aquí, ya\n"
	.string "nos hemos encargado personalmente\l"
	.string "de que así sea.$"

NinjaBaseS1_Cuarta_Trampa_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

NinjaBaseS1_Cuarta_Trampa_Move_2:
face_right
step_end

NinjaBaseS1_Quinta_Trampa::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 17
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Quinta_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_5, NinjaBaseS1_Quinta_Trampa_Texto_2
msgbox NinjaBaseS1_Quinta_Trampa_Texto_3 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end

NinjaBaseS1_Quinta_Trampa_Texto_1:
.string "¡Mis técnicas ninja te harán\n"
	.string "llorar!$"

NinjaBaseS1_Quinta_Trampa_Texto_2:
.string "Necesito más veneno en mi equipo.$"

NinjaBaseS1_Quinta_Trampa_Texto_3:
.string "Vamos a encargarnos de ti entre\n"
	.string "todos, nunca dijimos que\l"
	.string "jugaríamos limpio.$"
