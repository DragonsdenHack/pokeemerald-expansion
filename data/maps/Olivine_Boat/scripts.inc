Olivine_Boat_MapScripts::
	.byte 0

OlivineBoat1::
lock     
faceplayer     
msgbox OlivineBoat_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_1:
.string "El primer punto de conexión con el\n"
.string "PUERTO OLIVO, por razones obvias\l"
.string "de cercanía, será CIUDAD CARMÍN.$"



OlivineBoat2::
lock     
faceplayer     
msgbox OlivineBoat_Text_2, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_2:
.string "¡La comida aquí es insuperable!\n"
.string "¡En estas aguas tienes lo mejor de\l"
.string "KANTO-JOHTO juntos!$"



OlivineBoat3::
lock     
faceplayer     
msgbox OlivineBoat_Text_3, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_3:
.string "¡Esos MARINEROS son unos tipos\n"
.string "duros!\l"
.string "¡No sabía que TENTACRUEL pudiera\l"
.string "ser tan molesto!$"



OlivineBoat4::
lock     
faceplayer     
msgbox OlivineBoat_Text_4, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_4:
.string "¡Míranos!\n"
.string "Con todo lo ocurrido en el último\l"
.string "lustro, quién iba a decir que\l"
.string "KANTO y JOHTO comenzaran a hacer\l"
.string "las paces tan pronto.$"



OlivineBoat5::
end



OlivineBoat6::
lock     
faceplayer     
msgbox OlivineBoat_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_6:
.string "Mi hermano debería dejar de fardar\n"
.string "de sus POKÉMON adquiridos a golpe\l"
.string "de talonario. No me daría la menor\l"
.string "lástima que algún marinero de por\l"
.string "aquí le diera una buena lección en\l"
.string "un combate para que se callara de\l"
.string "una vez.$"



OlivineBoat7::
lock     
faceplayer     
msgbox OlivineBoat_Text_7, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_7:
.string "Creo que me estoy mareando, estas\n"
.string "fiestas no son para mi.$"



OlivineBoat8::
lock     
faceplayer     
msgbox OlivineBoat_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_8:
.string "He comprado un WISHIWASHI por 7000\n"
.string "FICHAS en CIUDAD TRIGAL solo para\l"
.string "presumir delante de todos estos\l"
.string "marineros, con un POKÉMON TIPO AGUA\l"
.string "que nunca podrán tener pero que\l"
.string "anhelan. ¿Acaso no es eso\l"
.string "jerarquía?\l"
.string "¡Hohoho!$"



OlivineBoat9::
end



OlivineBoat_EventScript_Caballero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, OlivineBoat_Text_CaballeroIntro, OlivineBoat_Text_CaballeroDefeated
	msgbox OlivineBoat_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OlivineBoat_EventScript_Marinero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, OlivineBoat_Text_MarineroIntro, OlivineBoat_Text_MarineroDefeated
	msgbox OlivineBoat_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end
