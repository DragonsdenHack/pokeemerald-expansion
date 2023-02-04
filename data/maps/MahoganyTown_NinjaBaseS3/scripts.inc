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
end



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


MahoganyTown_NinjaBaseS3_Combates_Finales::
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_7 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_11 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_12 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_14 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
release
end

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1:
.string "Como habéis podido ver en estas\n"
	.string "estimaciones, la venta de\l"
	.string "CARAMELOSFURIA no sale rentable,\l"
	.string "creo que deberíamos probar con\l"
	.string "algo más contundente, las COLASL...$"

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
.string "No...\n"
	.string "Esto no entraba en nuestros\l"
	.string "planes...\l"
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
