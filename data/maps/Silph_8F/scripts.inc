Silph_8F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
	.byte 0

SilphCo_8F_OnLoad::
	call_if_unset FLAG_UNUSED_0x035, EventScript_Close8FDoor
	end


Silph8F_1::
end



Silph8F_2::
lock     
faceplayer     
msgbox Silph8F_Text_2, MSGBOX_DEFAULT
release     
end

Silph8F_Text_2:
	.string "Euer BOSS ist ein grausamer Tyrann! Er\n"
	.string "sieht POKéMON nur als Werkzeuge und\l"
	.string "benutzt sie auf grausame Weise, um\l"
	.string "seine Ziele zu erreichen!$"



Silph8F_3::
end



Silph8F_4::
end



Silph8F_5::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph8F_5_Despues_Invasion
msgbox Silph8F_5_Texto_1 MSGBOX_NPC
release
end

Silph8F_5_Despues_Invasion::
msgbox Silph8F_5_Texto_2 MSGBOX_NPC
release
end

Silph8F_5_Texto_1:
	.string "Verschon mich! Ich bleibe auch ganz\n"
	.string "ruhig und werde keinen Ärger machen.\p"
	.string "Bitte glaub mir!$"

Silph8F_5_Texto_2:
	.string "Eure Zeit ist abgelaufen! Alle, die an\n"
	.string "diesem Überfall beteiligt waren, werden\l"
	.string "schon bald gefunden und zur\l"
	.string "Rechenschaft gezogen!$"



Silph8F_6::
end



Silph8F_EventScript_Policia::
	trainerbattle_single TRAINER_ALLISON, Silph8F_Text_PoliciaIntro, Silph8F_Text_PoliciaDefeated
	msgbox Silph8F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end




Silph8F_EventScript_Policia2::
	trainerbattle_single TRAINER_ISOBEL, Silph8F_Text_Policia2Intro, Silph8F_Text_Policia2Defeated
	msgbox Silph8F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph8F_EventScript_Cientifico::
	trainerbattle_single TRAINER_WADE, Silph8F_Text_CientificoIntro, Silph8F_Text_CientificoDefeated
	msgbox Silph8F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph8FDocumento_100::
msgbox Silph8FDocumento_Text_100, MSGBOX_SIGN   
end

Silph8FDocumento_Text_100:
.string "SILPH CO. HAUPTSITZ\n"
    .string "7 OG$"
