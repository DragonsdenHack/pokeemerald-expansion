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
