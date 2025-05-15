Route4_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
	.byte 0

Route4_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE4
	end

Route4_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

Route4PokemonCenter1::
end



Route4PokemonCenter2::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_2:
	.string "-TEAM ROCKET beraubt Bürger von\n"
	.string "AZURIA CITY-. Ihr solltet euch schämen,\l"
	.string "auf diese Weise in den Nachrichten\l"
	.string "aufzutauchen! Ihr habt ein ganzes Haus\l"
	.string "verwüstet, um SCHAUFLER TMs zu klauen.\l"
	.string "Ich hoffe, du hattest damit nichts zu\l"
	.string "tun!$"



Route4PokemonCenter3::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_3:
	.string "Der PC ist eine der wenigen\n"
	.string "Basis-Dienstleistungen, die euch\l"
	.string "ROCKETs noch zur Verfügung stehen.\p"
	.string "Zusammen mit den POKéMON-CENTERN ist\n"
	.string "das alles, was euch bleibt. Wenn es nach\l"
	.string "mir ginge, würde ich euch das auch noch\l"
	.string "streichen!$"



Route4PokemonCenter4::
lock     
faceplayer     
msgbox Route4_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

Route4_PokemonCenter_Text_4:
	.string "Hey! Du! Hör auf die sechs POKÉBÄLLE an\n"
	.string "meinem Gürtel anzuglotzen! Die kannste\l"
	.string "dir abschminken!$"



Route4PokemonCenter5::
end



Route4PokemonCenterDocumento_100::
msgbox Route4PokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

Route4PokemonCenterDocumento_Text_100:
.string "Eine Zeitung!$"

Route4_PokemonCenter_1F_Estafa::
lock
faceplayer
msgbox Route4_PokemonCenter_1F_Estafa_Texto_1 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route4_PokemonCenter_1F_Estafa_No
delay 10
playse SE_SHOP
removemoney 500 0
updatemoneybox
delay 80
hidemoneybox
msgbox Route4_PokemonCenter_1F_Estafa_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route4_PokemonCenter_1F_Estafa_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, Route4_PokemonCenter_1F_Estafa_Move_1
waitmovement 0x0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route4_PokemonCenter_1F_Estafa_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, Route4_PokemonCenter_1F_Estafa_Move_2
waitmovement 0x0
msgbox Route4_PokemonCenter_1F_Estafa_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
fadescreen 1
delay 20
removeobject 5
fadescreen 0
release
end


Route4_PokemonCenter_1F_Estafa_No::
hidemoneybox
msgbox Route4_PokemonCenter_1F_Estafa_Texto_8 MSGBOX_AUTOCLOSE
release
end

Route4_PokemonCenter_1F_Estafa_Texto_1:
	.string "Du siehst nach einem ROCKET mit großen\n"
	.string "Ambitionen aus. Nach einem, der sich\l"
	.string "nicht mit einem gewöhnlichen RATTFRATZ\l"
	.string "und RETTAN zufriedengibt.\p"
	.string "Dann hör' gut zu.$"

Route4_PokemonCenter_1F_Estafa_Texto_2:
	.string "Wie wäre es mit einem außergewöhnlichen\n"
	.string "POKéMON, dass dich überall berüchtigt\l"
	.string "macht? Und das nur für 500¥?\p"
	.string "Du wirst nirgendwo ein besseres\n"
	.string "Angebot finden!$"

Route4_PokemonCenter_1F_Estafa_Texto_3:
	.string "Hahaha! Schon wieder ein Trottel, der\n"
	.string "angebissen hat!$"

Route4_PokemonCenter_1F_Estafa_Texto_4:
	.string "Hast du wirklich gedacht, jemand würde\n"
	.string "dir für den Preis einen guten Fang\l"
	.string "verkaufen? KARPADOR ist nichts weiter\l"
	.string "als Kanonenfutter!$"

Route4_PokemonCenter_1F_Estafa_Texto_5:
	.string "Darüber hinaus bist du von TEAM ROCKET!\p"
	.string "Ich bin dir nichts schuldig! Wie sagt\n"
	.string "man: -Wer einen Betrüger betrügt und\l"
	.string "einen Dieb bestiehlt, erhält hundert\l"
	.string "Jahr Ablass.-$"

Route4_PokemonCenter_1F_Estafa_Texto_6:
	.string "Und das Beste ist: Du kannst mich nicht\n"
	.string "einmal bei der Polizei anzeigen, weil sie\l"
	.string "hinter dir und deiner Organisation her\l"
	.string "sind! Keiner wird dir zuhören,\l"
	.string "geschweige denn glauben! Das ist das\l"
	.string "ultimative Geschäft: Heiße Luft für\l"
	.string "500¥ zu verkaufen!\p"
	.string "Hahahaha!$"

Route4_PokemonCenter_1F_Estafa_Texto_7:
	.string "Auf Nimmerwiedersehen, ROCKET! Mich\n"
	.string "erwischst du nicht! Überleg dir das\l"
	.string "nächste Mal besser, mit wem du\l"
	.string "Geschäfte machst!$"

Route4_PokemonCenter_1F_Estafa_Texto_8:
	.string "Und ich dachte, ihr von TEAM ROCKET\n"
	.string "hättet ein gutes Gespür für Geschäfte.\p"
	.string "Wie enttäuschend.$"

Route4_PokemonCenter_1F_Estafa_Move_1:
walk_in_place_up
step_end

Route4_PokemonCenter_1F_Estafa_Move_2:
face_player
step_end
