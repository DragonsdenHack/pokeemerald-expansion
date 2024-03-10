MahoganyTown_NinjaBaseS3_MapScripts::
	.byte 0

NinjaBaseS3_1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_1:
.string "Dicen que FREDO cuenta con una\n"
.string "forma única de ARTICUNO, su forma\l"
.string "primigenia por así decirlo.\l"
.string "¿Existirán sus equivalentes para\l"
.string "ZAPDOS y MOLTRES?$"



NinjaBaseS3_2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_2:
.string "Si te digo la verdad…\n"
.string "No entiendo nada de estos planos…$"



NinjaBaseS3_3::
end



NinjaBaseS3_4::
end



NinjaBaseS3_5::
end



NinjaBaseS3_7::
lock
faceplayer
msgbox NinjaBaseS3_7_Texto_1 MSGBOX_NPC
release
end

NinjaBaseS3_7_Texto_1:
	.string "¿Hasta dónde cree que llegaremos con\n"
	.string "todo esto?$"



NinjaBaseS3_8::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_8, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_8:
.string "El progreso en cuanto STATS BASE\n"
.string "de los POKÉMON en el último medio\l"
.string "año ha sido espectacular.\l"
.string "¿Crees que POKÉMON como NIDOKING o\l"
.string "NIDOQUEEN dejarán de ser\l"
.string "considerados fuertes después de\l"
.string "elevar tanto el estándar?$"



NinjaBaseS3_9::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_9, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_9:
.string "Nadie es tan poderoso como el TEAM\n"
.string "ROCKET.\l"
.string "Tres bases en KANTO, dos bases en\l"
.string "JOHTO, una en HOENN, ¡y otra en\l"
.string "ISLAS SETE!\l"
.string "¡Somos omnipresentes!$"



NinjaBaseS3_10::
end



NinjaBaseS3_11::
end



NinjaBaseS3_12::
end



NinjaBaseS3_15::
end



NinjaBaseS3_EventScript_Calvo::
	trainerbattle_single TRAINER_CRISTIN_1, NinjaBaseS3_Text_CalvoIntro, NinjaBaseS3_Text_CalvoDefeated
	msgbox NinjaBaseS3_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS3_EventScript_Ladron::
	trainerbattle_single TRAINER_BEAU, NinjaBaseS3_Text_LadronIntro, NinjaBaseS3_Text_LadronDefeated
	msgbox NinjaBaseS3_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS3_EventScript_Ninja::
	trainerbattle_single TRAINER_TONY_2, NinjaBaseS3_Text_NinjaIntro, NinjaBaseS3_Text_NinjaDefeated
	msgbox NinjaBaseS3_Text_NinjaPostBattle, MSGBOX_AUTOCLOSE
	end


MahoganyTown_NinjaBaseS3_Combates_Finales::
lock
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_1
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_7
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_7
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_8
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CELIA, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_11
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_9
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BROOKE_3, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_14
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
delay 30
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
clearflag FLAG_RECEIVED_SHOAL_SALT_2
fadescreen 1
removeobject 6
removeobject 13
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 164
release
end

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1:
.string "Como habéis podido ver en estas\n"
	.string "estimaciones, la venta de\l"
	.string "CARAMELOSFURIA no sale rentable,\l"
	.string "creo que deberíamos probar con\l"
	.string "algo más contundente, las COLASL…$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_2:
.string "¿Quién eres tú?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_3:
.string "¿Cómo ha llegado un ROCKET hasta\n"
	.string "aquí?\l"
	.string "¿Recuperar la BASE CAOBA?\l"
	.string "Nunca fue vuestra, nosotros solo\l"
	.string "aprovechamos el descuido de FREDO\l"
	.string "para instalar aquí nuestro centro\l"
	.string "de operaciones.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_4:
.string "No deberías haber interrumpido\n"
	.string "esta reunión, si has llegado hasta\l"
	.string "aquí pasando por toda la seguridad\l"
	.string "quiere decir que estás agotado.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_5:
.string "¡TARO!\n"
	.string "¡Encárgate de él!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_6:
.string "Tus POKÉMON no tienen ya la\n"
	.string "frescura necesaria como para hacer\l"
	.string "frente a mi equipo.\l"
	.string "¡En guardia!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_7:
.string "¡No puede ser!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_8:
.string "Así que sigues en pie, ya veo que\n"
	.string "no eres como los demás ROCKET. Eso\l"
	.string "que dicen de que solo sois fuertes\l"
	.string "en número es mentira, a pesar de\l"
	.string "todo.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9:
.string "Tal vez seas el mejor ENTRENADOR\n"
	.string "aquí, pero no en este\l"
	.string "momento. Aquí juegas con nuestras\l"
	.string "reglas.\l"
	.string "¡MACUTO!\l"
	.string "¡Remátalo!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_10:
.string "Voy a aplastarte con toda mi\n"
	.string "fuerza bruta.\l"
	.string "¡Verás por qué me conocen como\l"
	.string "el mayor matón de toda JOHTO!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_11:
.string "¡Tú!\n"
	.string "¿¡Cómo te atreves!?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_12:
.string "Ya estoy harto de ti, ¿creéis que\n"
	.string "podéis venir a JOHTO y hacer lo\l"
	.string "que os dé la gana?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_13:
.string "Me ocuparé personalmente de darte\n"
	.string "el golpe de gracia, esta base será\l"
	.string "nuestra de una vez por todas.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_14:
.string "¿Cómo es posible?\n"
	.string "¡Deberías estar ya agotado!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_15:
.string "No{PAUSE 25}…{PAUSE 25}\n"
	.string "Esto no entraba en nuestros\l"
	.string "planes{PAUSE 25}…{PAUSE 25}\l"
	.string "Después de todo no podremos\l"
	.string "empezar de nuevo aquí, vosotros\l"
	.string "ganáis, ¿verdad?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_16:
.string "Espero que al menos le déis un\n"
	.string "buen uso.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_1:
walk_up
walk_up
walk_up
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2:
emote_exclamation_mark
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3:
emote_exclamation_mark
walk_in_place_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4:
walk_in_place_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5:
walk_left
face_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6:
face_up
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_7:
walk_right
face_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_8:
walk_down
walk_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_9:
walk_left
walk_down
walk_down
walk_down
walk_down
step_end

MahoganyTown_NinjaBaseS3_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 162
release
end

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_down

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "¿Estás ya en PUEBLO CAOBA?\l"
	.string "Perfecto.\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "Bien, veo que te has adelantado,\l"
	.string "iba a enviar a ATLAS y ANDRA a\l"
	.string "recuperar la BASE CAOBA, pero\l"
	.string "confío en que contigo sea\l"
	.string "suficiente, espero que pueda estar\l"
	.string "despejada y lista para trabajar\l"
	.string "cuanto antes.$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_2:
.string "¿Así que has derrotado al\n"
	.string "GRAN MAESTRO de CIUDAD IRIS? Ese\l"
	.string "EEVEE suyo parece ser el ancestro\l"
	.string "de todos los EEVEE, puede\l"
	.string "transformarse en cada uno de los\l"
	.string "tipos de los movimientos que\l"
	.string "ejecute. Te ha debido de poner en\l"
	.string "problemas, {PLAYER}.\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "¡¿HO-OH apareció?!\l"
	.string "¿En la cima de TORRE CAMPANA?\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "¿Un ENTRENADOR que solo usa\l"
	.string "LEGENDARIOS MAYORES apareció y lo\l"
	.string "capturó?\l"
	.string "¿¡También tenía a LUGIA!?$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_3:
.string "Esto rompe todos nuestros\n"
	.string "esquemas, ¿dices que ya lo conoces\l"
	.string "de ISLAS SETE y allí ya se hizo\l"
	.string "con los LEGENDARIOS de HOENN?\l"
	.string "Debe de ser alguien muy peligroso,\l"
	.string "tal vez busque lo mismo que\l"
	.string "nosotros. Haré redoblar la guardia\l"
	.string "en RUINAS ALFA.$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_4:
.string "Estáte atento, {PLAYER}, debemos\n"
	.string "actuar en consecuencia. Pronto\l"
	.string "volveremos a estar en contacto.$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja::
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_3, MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_2
msgbox MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 4
fadescreen 0
setvar VAR_UNUSED_0x40F7, 163
release
end

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_1:
.string "De modo que tú eres el grueso del\n"
	.string "TEAM ROCKET, ¡acabaré contigo!$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_2:
.string "¡Maldición!$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_3:
.string "Ni un oficial del TEAM ROCKET nos\n"
	.string "podrá echar de aquí, la unión hace\l"
	.string "la fuerza.$"
