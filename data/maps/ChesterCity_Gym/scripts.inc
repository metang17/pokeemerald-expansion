ChesterCity_Gym_MapScripts::
	.byte 0


ChesterCity_Gym_EventScript_JennaBattle::
# 5 "data/maps/ChesterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Jenna_Intro, Jenna_Outro
# 6 "data/maps/ChesterCity_Gym/scripts.pory"
	msgbox PostBattle_Jenna, MSGBOX_AUTOCLOSE
# 7 "data/maps/ChesterCity_Gym/scripts.pory"
	waitmessage
	end


ChesterCity_Gym_EventScript_JohannaBattle::
# 13 "data/maps/ChesterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Johanna_Intro, Johanna_Outro
# 14 "data/maps/ChesterCity_Gym/scripts.pory"
	msgbox PostBattle_Johanna, MSGBOX_AUTOCLOSE
# 15 "data/maps/ChesterCity_Gym/scripts.pory"
	waitmessage
	end


ChesterCity_Gym_EventScript_TianaBattle::
# 21 "data/maps/ChesterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Tiana_Intro, Tiana_Outro
# 22 "data/maps/ChesterCity_Gym/scripts.pory"
	msgbox PostBattle_Tiana, MSGBOX_AUTOCLOSE
# 23 "data/maps/ChesterCity_Gym/scripts.pory"
	waitmessage
	end


ChesterCity_Gym_EventScript_CadeBattle::
# 29 "data/maps/ChesterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CADE_1, Cade_Intro, Cade_Outro
# 30 "data/maps/ChesterCity_Gym/scripts.pory"
	msgbox PostBattle_Cade, MSGBOX_AUTOCLOSE
# 31 "data/maps/ChesterCity_Gym/scripts.pory"
	waitmessage
	end


Jenna_Intro::
# 36 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Even flowers wilt…\n"
	.string "Guess I will too after this battle.$"

Jenna_Outro::
# 42 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "I suppose…\n"
	.string "Even winning can’t make the emptiness\l"
	.string "go away.$"

PostBattle_Jenna::
# 48 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "I'm here to train and become better\n"
	.string "then our toddler of a GYM LEADER.$"

Johanna_Intro::
# 53 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Flowers fade, trainers fall…\n"
	.string "Let’s get this over with.$"

Johanna_Outro::
# 58 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Another battle, another reminder\n"
	.string "that nothing lasts.$"

PostBattle_Johanna::
# 63 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Our GYM LEADER is so obnoxious.\p"
	.string "I wish I could find a new career\n"
	.string "path, but this job pays well.$"

Tiana_Intro::
# 69 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Let’s give it our all and have\n"
	.string "a blast!$"

Tiana_Outro::
# 74 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "That was amazing!\n"
	.string "Thanks for battling with me!$"

PostBattle_Tiana::
# 79 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Between you and me, I think that\n"
	.string "CADE has a crush on me!$"

Cade_Intro::
# 84 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Cade: I have all the WOMEN in my gym!\p"
	.string "It's great, isn't it?\p"
	.string "If you haven't heard of me yet,\n"
	.string "I'm CADE, the Chester City GYM LEADER!\p"
	.string "I hope you're ready to rumble!$"

Cade_Outro::
# 92 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Noooo!\n"
	.string "My clout....$"

PostBattle_Cade::
# 97 "data/maps/ChesterCity_Gym/scripts.pory"
	.string "Oh well.\n"
	.string "Here, take this badge.$"
