FileIsleMeadow_MapScripts::
	.byte 0

FileIsleMeadow1::
end


FileIsleMeadow2::
end


FileIsleMeadow3::
end


FileIsleMeadow4::
end


FileIsleMeadow5::
end


FileIsleMeadow8::
end


FileIsleMeadow9::
end

FileIsleMeadow_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_UNUSED, FileIsleMeadow_Text_GruntIntro, FileIsleMeadow_Text_GruntDefeated
	msgbox FileIsleMeadow_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end



FileIsleMeadow7::
lock     
faceplayer     
msgbox FileIsleMeadow7_Text_7, MSGBOX_DEFAULT
release     
end

FileIsleMeadow7_Text_7:
.string "-ARON ama a NORA-\n"
	.string "-HO-OH es ese HO-OH-\l"
	.string "La gracia de nuestras contraseñas\l"
	.string "es que se leen igual al revés,\l"
	.string "aunque también he oído que ese\l"
	.string "HO-OH es un poderoso POKÉMON de\l"
	.string "JOHTO, la región de donde proviene\l"
	.string "ATLAS.$"



FileIsleMeadow6::
lock
faceplayer
msgbox FileIsleMeadow6_Text_6YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow6_6No
msgbox FileIsleMeadow6_Text_6Yes, MSGBOX_DEFAULT
release
end



FileIsleMeadow6_Text_6YesNo:
.string "Algunos dicen que nuestro ALMACÉN\n"
	.string "destruye y contamina el paisaje de\l"
	.string "la isla, yo pienso que le da un\l"
	.string "toque único y cierta personalidad.\l"
	.string "¿Estás conmigo?$"



FileIsleMeadow6_6No::
msgbox FileIsleMeadow6_Text_6No, MSGBOX_DEFAULT
release
end


FileIsleMeadow6_Text_6Yes:
.string "¡Así se habla!\n"
	.string "¡TEAM ROCKET al poder!$"



FileIsleMeadow6_Text_6No:
.string "¡Todo ROCKET que se precie sabe\n"
	.string "que los paisajes industriales son\l"
	.string "lo mejor del mundo!\l"
	.string "¡Eres una deshonra!$"

	