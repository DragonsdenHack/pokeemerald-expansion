Route106_MapScripts::
	.byte 0

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	trainerbattle_single TRAINER_TRAINER_416, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	trainerbattle_single TRAINER_TRAINER_417, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Elliot::
	trainerbattle_single TRAINER_TRAINER_418, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated,
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ELLIOT_1
	release
	end

Route106_EventScript_ElliotRematch::
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ned::
	trainerbattle_single TRAINER_TRAINER_419, Route106_Text_NedIntro, Route106_Text_NedDefeated
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"

Route106_Tristana::
lock
msgbox Route106_Tristana_Texto_1 MSGBOX_DEFAULT
release
end

Route106_Tristana_Texto_1:
	.string "Está durmiendo...$"

Route106_Ariana::
lock
msgbox Route106_Ariana_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_11 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_12 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_14 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_15 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_17 MSGBOX_AUTOCLOSE
msgbox Route106_Ariana_Texto_18 MSGBOX_AUTOCLOSE
release
end

Route106_Ariana_Texto_1:
	.string "POLICÍA: Un científico de DEVON desea\n"
	.string "verla, MADAME ARIANA.$"

Route106_Ariana_Texto_2:
	.string "ARIANA: Que pase.$"

Route106_Ariana_Texto_3:
	.string "¿A qué se debe esta visita?$"

Route106_Ariana_Texto_4:
	.string "C.DEVON: Solo queríamos agradecerle su\n"
	.string "colaboración en la pequeña operación\l"
	.string "que tuvimos en MALVALANOVA.$"

Route106_Ariana_Texto_5:
	.string "ARIANA: Oh, no hay de qué. Hacen\n"
	.string "ustedes un gran trabajo para HOENN.$"

Route106_Ariana_Texto_6:
	.string "C.DEVON: Esto es para usted.$"

Route106_Ariana_Texto_7:
	.string "ARIANA: Hum… jamás había visto un\n"
	.string "POKÉMON así.$"

Route106_Ariana_Texto_8:
	.string "C.DEVON: Es XURKITREE: un raro POKÉMON\n"
	.string "proveniente de una región lejana. Las\l"
	.string "relaciones de DEVON con este CASINO\l"
	.string "siempre fueron buenas, y en señal de\l"
	.string "ello queremos donar este POKÉMON.$"

Route106_Ariana_Texto_9:
	.string "ARIANA: Es un POKÉMON muy curioso, sí…$"

Route106_Ariana_Texto_10:
	.string "C.DEVON: Puede hacer con él lo que le\n"
	.string "plazca: subastarlo en el CASINO,\l"
	.string "quedárselo y entrenarlo…$"

Route106_Ariana_Texto_11:
	.string "ARIANA: Muchas gracias. Dele de mi\n"
	.string "parte las gracias al PRESIDENTE.$"

Route106_Ariana_Texto_12:
	.string "C.DEVON: Así se lo haré saber.$"

Route106_Ariana_Texto_13:
	.string "… …$"

Route106_Ariana_Texto_14:
	.string "ARIANA: Mmm… vaya… parece ser un\n"
	.string "POKÉMON poderoso, ¿será LEGENDARIO?$"

Route106_Ariana_Texto_15:
	.string "Parece haber sido sobrecargado con un\n"
	.string "exceso de energía eléctrica… bueno,\l"
	.string "qué más da.$"

Route106_Ariana_Texto_16:
	.string "¿Sí? ¿Quién es?$"

Route106_Ariana_Texto_17:
	.string "????: … … Ha pasado mucho tiempo.$"

Route106_Ariana_Texto_18:
	.string "ARIANA: … …$"

