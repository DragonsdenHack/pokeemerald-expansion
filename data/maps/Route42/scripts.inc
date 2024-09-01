Route42_MapScripts::
	.byte 0

Route42_1::
end



Route42_2::
end



Route42_3::
end



Route42_4::
end



Route42_5::
end



Route42_6::
end



Route42_7::
lock     
faceplayer     
msgbox Route42_Text_7, MSGBOX_DEFAULT
release     
end

Route42_Text_7:
	.string "Our LEADER, PRYCE, has an important\n"
	.string "appointment in GOLDENROD, and he has\l"
	.string "asked us to close MAHOGANY TOWN in his\l"
	.string "absence. Upon his return, you can visit\l"
	.string "MAHOGANY TOWN.$"



Route42_8::
lock     
faceplayer     
msgbox Route42_Text_8, MSGBOX_DEFAULT
release     
end

Route42_Text_8:
	.string "Our LEADER, PRYCE, has an important\n"
	.string "appointment in GOLDENROD, and he has\l"
	.string "asked us to close MAHOGANY TOWN in his\l"
	.string "absence. Upon his return, you can visit\l"
	.string "MAHOGANY TOWN.$"



Route42_9::
lock     
faceplayer     
msgbox Route42_Text_9, MSGBOX_DEFAULT
release     
end

Route42_Text_9:
	.string "Our LEADER, PRYCE, has an important\n"
	.string "appointment in GOLDENROD, and he has\l"
	.string "asked us to close MAHOGANY TOWN in his\l"
	.string "absence. Upon his return, you can visit\l"
	.string "MAHOGANY TOWN.$"



Route42_EventScript_Necio::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, Route42_Text_NecioIntro, Route42_Text_NecioDefeated
	msgbox Route42_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_EventScript_Pescador::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, Route42_Text_PescadorIntro, Route42_Text_PescadorDefeated
	msgbox Route42_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_EventScript_Montanero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, Route42_Text_MontaneroIntro, Route42_Text_MontaneroDefeated
	msgbox Route42_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_SudowoodoRest::
msgbox Route42_SudowoodoRest_Text, MSGBOX_NPC   
end

Route42_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route42Documento_100::
msgbox Route42Documento_Text_100, MSGBOX_SIGN   
end

Route42Documento_Text_100:
	.string "MT. MORTAR\n"
	.string "WATERFALL CAVE INSIDE$"



Route42Documento_101::
msgbox Route42Documento_Text_101, MSGBOX_SIGN   
end

Route42Documento_Text_101:
	.string "ROUTE 42\n"
	.string "ECRUTEAK CITY - MAHOGANY TOWN$"
