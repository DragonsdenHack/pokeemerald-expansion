Culto2_MapScripts::
	.byte 0

Culto2_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_3, Culto2_Text_MediumIntro, Culto2_Text_MediumDefeated
	msgbox Culto2_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



Culto2_EventScript_Medium2::
	trainerbattle_single TRAINER_RICKY_4, Culto2_Text_Medium2Intro, Culto2_Text_Medium2Defeated
	msgbox Culto2_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end

Culto2_NPC_2::
lock
faceplayer
msgbox Culto2_NPC_2_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_2_Texto_1:
.string "Aún no has visto nada, prepárate\n"
	.string "para poner en duda todo lo que\l"
	.string "creías saber hasta este momento.$"


Culto2_NPC_4::
lock
faceplayer
msgbox Culto2_NPC_4_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_4_Texto_1:
.string "Cuida cada paso que des aquí.\n"
	.string "Estás pisando historia viva.$"


Culto2_NPC_5::
lock
faceplayer
msgbox Culto2_NPC_5_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_5_Texto_1:
.string "La verdad, aunque solo sea conocida por\n"
	.string "por unos pocos, seguirá siendo la verdad.\l"
	.string "Nadie puede deshacer el hecho de\l"
	.string "que fuiste CAMPEÓN de KANTO.$"


Culto2_NPC_6::
lock
faceplayer
msgbox Culto2_NPC_6_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_6_Texto_1:
.string "¿Cómo hemos podido vivir aquí sin\n"
	.string "salir al exterior durante siglos?\p"
	.string "No estás preparado para conocer\n"
	.string "las verdaderas dimensiones de este\l"
	.string "lugar, todo cuanto necesitamos ya\l"
	.string "lo tenemos aquí.\l"
	.string "Estas cámaras se han forjado durante\l"
	.string "siglos, y son más extensas que\l"
	.string "cualquier ciudad que conozcas.\p"
	.string "Un homenaje a lo eterno e imperecedero.$"
