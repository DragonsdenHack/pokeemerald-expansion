LavenderRadioP7_MapScripts::
	.byte 0

LavenderRadioP7_EventScript_ReceiveDarumaka::
    lock
    faceplayer
	checkmoncatch SPECIES_SALANDIT
	goto_if_eq VAR_RESULT, FALSE, LavenderRadioP7_EventScript_TakeDarumaka 
	msgbox LavenderRadioP7_Text_1, MSGBOX_DEFAULT
	release
	end



LavenderRadioP7_EventScript_TakeDarumaka::
    msgbox LavenderRadioP7_Text_TakeDarumaka MSGBOX_DEFAULT
	msgbox LavenderRadioP7_Text_TakeDarumaka2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox LavenderRadioP7_Text_MensajeDarumaka, MSGBOX_DEFAULT
	givemon SPECIES_SALANDIT, 30, ITEM_FIRE_GEM
	waitfanfare  
	release
	end 



LavenderRadioP7_Text_TakeDarumaka:
	.string "Recently, we discovered a Pokémon\n"
	.string "capable of corrupting the STEEL TYPE\l"
	.string "and even poisoning the POISON TYPE\l"
	.string "itself.$"

LavenderRadioP7_Text_TakeDarumaka2:
	.string "Given your elevated position, you\n"
	.string "certainly deserve to have a copy. Here\l"
	.string "you go.$"

LavenderRadioP7_Text_MensajeDarumaka:
.string "You obtained a level 30 SALANDIT!$"

LavenderRadioP7_Text_1:
	.string "Everything can be corrupted, even that\n"
	.string "which may seem most beautiful and pure.\l"
	.string "That we are sitting here now is proof of\l"
	.string "it.$"

LavenderRadioP7_Primer_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Primer_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Primer_Rocket_Texto_1:
	.string "Amidst all the office and productivity,\n"
	.string "a resting space like this is quite\l"
	.string "welcome, don't you think?$"

LavenderRadioP7_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Primer_Cientifico_Texto_1:
	.string "A short while ago, an elderly person\n"
	.string "appeared here whom I had never seen\l"
	.string "before. He must be someone very\l"
	.string "important; otherwise, security would\l"
	.string "never have allowed him to reach here.$"

LavenderRadioP7_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Segundo_Cientifico_Texto_1:
	.string "The truth is, the new RADIO TOWER is\n"
	.string "more imposing than the old POKÉMON\l"
	.string "TOWER, which only had 6 floors. Now we\l"
	.string "have 10 floors, like SILPH, plus the\l"
	.string "rooftop. We've set height records in\l"
	.string "KANTO!$"

LavenderRadioP7_Segundo_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Segundo_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Segundo_Rocket_Texto_1:
	.string "Some even say that NIDOKING and\n"
	.string "NIDOQUEEN will become obsolete after\l"
	.string "all the developments with the waves\l"
	.string "here. Will we reach that point?$"

LavenderRadioP7_Policia::
lock
faceplayer
msgbox LavenderRadioP7_Policia_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Policia_Texto_1:
	.string "You were the key player in the SILPH\n"
	.string "assault, defeating all the security, the\l"
	.string "PRESIDENT, and BILL. But now, it would\l"
	.string "only take me and my team of level 90\l"
	.string "POKÉMON to make a mockery of that\l"
	.string "young talent you were. Everything is\l"
	.string "moving very fast.$"


LavenderRadioP7_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Tercer_Cientifico_Texto_1:
	.string "We've argued a thousand times about\n"
	.string "security being the main reason to\l"
	.string "prevent entry beyond P1. A safe way to\l"
	.string "make people believe falsehoods is\l"
	.string "through frequent repetition, because\l"
	.string "familiarity is not easily\l"
	.string "distinguishable from truth.$"

LavenderRadioP7_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Cuarto_Cientifico_Texto_1:
	.string "Once I met someone, someone who\n"
	.string "reached such a level of productivity\l"
	.string "and obsession that they conceived rest\l"
	.string "solely as the process they had to go\l"
	.string "through to refill their energy bar. They\l"
	.string "ended up getting what they wanted, but\l"
	.string "at a high price.$"

LavenderRadioP7_Quinto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Quinto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Quinto_Cientifico_Texto_1:
	.string "Staring at the fountain makes you\n"
	.string "forget the enormous amount of things\l"
	.string "you still have to do. But if you manage\l"
	.string "to remember them during the process,\l"
	.string "you'll realize that they are mostly an\l"
	.string "illusion: we suffer more in our\l"
	.string "imagination than in reality.$"

LavenderRadioP7_Tercer_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Tercer_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Tercer_Rocket_Texto_1:
.string "Hahaha!\n"
	.string "From here, you can see the SILPH\l"
	.string "HEADQUARTERS! They surely can see us\l"
	.string "too! At least those who are now allowed\l"
	.string "to enter the upper floors due to -\l"
	.string "security -! Hahaha!$"

LavenderRadioP7_Cuarto_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Cuarto_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Cuarto_Rocket_Texto_1:
	.string "Recently the underground routes were\n"
	.string "closed; our biker colleagues weren't\l"
	.string "pleased about it. But who cares, we've\l"
	.string "achieved all the power we wanted; we\l"
	.string "don't need them anymore.$"

LavenderRadioP7_Quinto_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Quinto_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Quinto_Rocket_Texto_1:
	.string "I heard some EXECUTIVES talking with\n"
	.string "ARCHER; apparently, there are items that\l"
	.string "increase the performance of certain\l"
	.string "POKÉMON. They mentioned GIOVANNI's\l"
	.string "RHYPERIOR and how with a PROTECTOR, it\l"
	.string "increased its defenses.$"

LavenderRadioP7Documento_100::
msgbox LavenderRadioP7Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP7Documento_Text_100:
.string "7th Restroom$"

LavenderRadioP7Documento_101::
msgbox LavenderRadioP7Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP7Documento_Text_101:
.string "-The best is the enemy of the good-.$"
