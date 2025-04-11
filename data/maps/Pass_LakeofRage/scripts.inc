Pass_LakeofRage_MapScripts::
	.byte 0

Pass_LakeofRage_Primer_Policia::
lock
msgbox Pass_LakeofRage_Primer_Policia_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pass_LakeofRage_Primer_Policia_Texto_1:
	.string "No one could invade this guard\n"
	.string "post without our consent.$"

Pass_LakeofRage_Segundo_Policia::
lock
msgbox Pass_LakeofRage_Segundo_Policia_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pass_LakeofRage_Segundo_Policia_Texto_1:
	.string "This place is a gift of nature, which\n"
	.string "anyone can admire without paying a\l"
	.string "single ¥.$"
