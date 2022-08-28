Pass_Route36_MapScripts::
	.byte 0

PassRoute36_1::
lock     
faceplayer     
msgbox Pass_Route36_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route36_Text_1:
.string "Si necesitas despejarte de tu\n"
.string "ajetreada vida, el PARQUE NACIONAL\l"
.string "es el lugar adecuado.$"



PassRoute36_2::
lock     
faceplayer     
msgbox Pass_Route36_Text_2, MSGBOX_DEFAULT
release     
end

Pass_Route36_Text_2:
.string "Dicen que van a organizar un\n"
.string "concurso aquí, ¿será divertido?$"



PassRoute36_3::
lock     
faceplayer     
msgbox Pass_Route36_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route36_Text_3:
.string "El mundo POKÉMON es muy amplio. Y\n"
.string "sigue habiendo muchas cosas que\l"
.string "ignoramos. ¡Pero yo sé más que tú!$"
