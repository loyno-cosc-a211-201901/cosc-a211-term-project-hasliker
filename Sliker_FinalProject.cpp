//Haley Sliker
//Final Project
//A small-scale monologue database that assists actors in finding contemporary and classical monologues.
//December 9, 2019

#include <iostream>
using namespace std;

int main()
{
    char gender;
    int genreMale;
    int genreFemale;
    int play;
    int finalChoice;

    cout << "Welcome to the Monologue Database!" << endl;

    pickGender:
    cout << "Are you looking for male or female monologues? (Type M or F)" << endl;
    cin >> gender;

    for ( ; ; )
    {
        if (gender == 'M' || gender == 'm')
        {
            genreMale:
            cout << "Which of the following four genres are you interested in? (Choose 1 - 6)" << endl;
            cout << "1. Contemporary Comedic" << endl;
            cout << "2. Contemporary Dramatic" << endl;
            cout << "3. Classical Comedic" << endl;
            cout << "4. Classical Dramatic" << endl;
            cout << "5. Go Back" << endl;
            cout << "6. Quit Program" << endl;
            cin >> genreMale;

            if (genreMale <= 4)
            {
                switch (genreMale)
                {
                    case 1:
                    {
                        contComedicMale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. Jihad Jones and the Kalashnikov Babes by Yussef El Guindi" << endl;
                        cout << "2. The Odd Couple by Neil Simon" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;
                        
                        switch (play)
                        {
                            case 1:
                            {
                                cout << "Cantwell’s out there… Groveling… Before Cassandra… It’s always instructive to see your boss begging. It puts a perspective on how much more you have to learn on ways to debase yourself to get what you want. -- He wants to kill you… I’ve asked him to hold off on that. As your agent, I feel I should have the first crack at that. Then, if you’re still breathing, I think you should be passed around the office and systematically get beaten up by everyone whose job you may have imperiled. But the strange thing is… Julius still wants you.. Established stars have suffered for doing less, but he, the great Julius, is waiting on you. A nobody.-- A less than nobody.-- A fart. That some drama school blew out of its curriculum. Less than a fart. A know-nothing stink. A cretin. A retarded know-nothing stink cretin with the brain capacity of a piece of chewed-up bubble gum spat into the toilet and flushed out to sea where all other washed-out, talentless non-starters wash up and die and get buried in little sandcastles where bratty little kids with no bladder control play. I love you, you know that… You’re like my own-- in a weird, non-sexual sort of way. Please. For God’s sake. Come to your senses. Ashraf. Say yes. Just say yes. That’s all you have to do." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contComedicMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "I’ll tell you exactly what it is.  It’s the cooking, cleaning and crying… It’s the talking in your sleep, it’s the moose calls that open your ears at two o’clock in the morning… I can’t take it anymore, Felix.  I’m crackin’ up.  Everything you do irritates me.  And when you’re not here, the things I know you’re gonna do when you come in irritate me… You leave me little notes on my pillow.  I told you a hundred times, I can’t stand little notes on my pillow.  “We’re all out of Corn Flakes. F.U.”… It took me three hours to figure out that F.U. was Felix Unger… It’s not your fault, Felix.  It’s a rotten combination.  That’s just the frame.  The picture I haven’t even painted yet… I got a typewritten list in my office of the “Ten Most Aggravating Things You Do That Drive Me Berserk” … But last night was the topper.  Oh, that was the topper.  Oh, that was the ever-loving lulu of all times." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contComedicMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreMale;
                            }
                        }
                    }
                    case 2:
                    {
                        contDramaticMale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. Pluto by Steve Yockey" << endl;
                        cout << "2. The Shadow Box by Michale Cristofer" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "I absolutely believe you. And it seems like there’s been some kind of miscommunication here, it’s probably my fault, but it took a really long time getting here, or it was an arduous time getting here as duration doesn’t really have a strong, you know, let’s just say I was distracted by the cold. Elizabeth, I’m not here to pass judgment of any kind on your son. Honestly. That’s why any protestations from you are going to fall on deaf ears, at least in regards to Bailey. I’m not here, literally or metaphorically, to weigh him or exact some kind of vengeance and I’m not here because he did a very bad thing. And he did do a very bad thing. I’m here because after he did a very bad thing to at least a dozen other people, he did something very bad to himself. He shot himself in the heart." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contDramaticMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "I get dreams now. Every night. I get dreams so big. I never used to dream. But now, every night, so big. Every person I ever knew in my life coming through my room, talking and talking and sometimes singing and dancing. Jumping all around my bed. And I get up to go with them, but I can’t. The sheets are too heavy and I can’t move to save my life. And they keep talking and calling my name, whispering so loud it hurts my ears… ‘Joe’ and ‘Joe’ and laughing and singing and I know every one of them and they pull at my arms and my legs and I still can’t move. And I’m laughing and singing, too, inside, where you can’t hear it. And it hurts so bad, but I can't feel it. And I yell back at them, every person I ever knew, and they don’t hear me either, and then the room gets brighter and brighter. So bright I can’t see anything anymore. Nobody. Not even me. All white. All gone." << endl;
                                cout << "What would you like to do? (1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contDramaticMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreMale;
                            }
                        }
                    }
                    case 3:
                    {           
                        classComedicMale: 
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. A Midsummer Night's Dream by William Shakespeare" << endl;
                        cout << "2. The Forced Marriage by Molière" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "My mistress with a monster is in love. Near to her close and consecrated bower, while she was in her dull and sleeping hour, a crew of patches, rude mechanicals, that work for bread upon Athenian stalls, were met together to rehearse a play, intended for great Theseus' nuptial day. The shallowest thickskin of that barren sort, who Pyramus presented in their sport, forsook his scene and entered in a brake. When I did him at this advantage take, an ass's nole I fixèd on his head. Anon his Thisby must be answerèd, and forth my mimic comes. When they him spy, as wild geese that the creeping fowler eye, or russet-pated choughs, many in sort, rising and cawing at the gun's report, sever themselves and madly sweep the sky; So at his sight away his fellows fly, and at our stamp here o'er and o'er one falls; He murder cries and help from Athens calls. Their sense thus weak, lost with their fears thus strong, made senseless things begin to do them wrong, for briers and thorns at their apparel snatch: Some, sleeves -- some, hats; from yielders all things catch. I led them on in this distracted fear and left sweet Pyramus translated there, when in that moment (so it came to pass) Titania waked, and straightway loved an ass." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classComedicMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "If we take fifty-two from sixty-four, we get twelve; five years you spent in Holland, seventeen; seven years spent in England, twenty-four; eight years in Rome, thirty-two; and if to thirty-two we add your age when we first became acquainted, we have exactly fifty-two. So that, Mr. Sganarelle, according to your own confession, you are between fifty-two and fifty-three years of age. The calculation is exact enough. Now, I will tell you frankly, as a friend--according to the promise you made me give you--that marriage would suit you but little. Marriage is a thing about which young people ought to think long and seriously before they risk themselves, but of which people of your age ought not to think at all; and if, as some say, the greatest folly a man can commit is to marry, I know nothing more preposterous than to commit such a folly at a time of life when we should be most prudent. In short, to speak to you plainly, I advise you not to marry; and I should think you very ridiculous if, after having remained free up to your time of life, you were now to burden yourself with the heaviest of all chains. [Pause.] What's that? You're in love with her? Ah! That's quite another thing. You didn't tell me that. By all means marry, then; I haven't another word to say." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classComedicMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreMale;
                            }
                        }
                    }
                    case 4:
                    {
                        classDramaticMale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. The Changeling by Thomas Middleton" << endl;
                        cout << "2. Hamlet by William Shakespeare" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "Yonder's she; Whatever ails me, now a-late especially, I can as well be hang'd as refrain seeing her; Some twenty times a-day, nay, not so little, do I force errands, frame ways and excuses, to come into her sight; and I've small reason for't, And less encouragement, for she baits me still, every time worse than other; does profess herself the cruelest enemy to my face in town; At no hand can abide the sight of me, as if danger or ill luck hung in my looks. I must confess my face is bad enough, but I know far worse has better fortune, and not endur'd alone, but doted on; And yet such pick-hair'd faces, chins like witches', here and there five hairs whispering in a corner, as if they grew in fear one of another, wrinkles like troughs, where swine-deforming swills the tears of perjury, that lie there like wash fallen from the slimy and dishonest eye; Yet such a one plucks sweets without restraint, and has the grace of beauty to his sweet. Though my hard fate has thrust me out of servitude, I tumbled into th' world a gentleman. She turns her blessed eye upon me now, and I'll endure all storms before I part with't." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classDramaticMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "To be, or not to be--that is the question: Whether 'tis nobler in the mind to suffer the slings and arrows of outrageous fortune or to take arms against a sea of troubles and by opposing end them. To die, to sleep-- no more--and by a sleep to say we end the heartache, and the thousand natural shocks that flesh is heir to. 'Tis a consummation devoutly to be wished. To die, to sleep-- to sleep--perchance to dream: ay, there's the rub, for in that sleep of death what dreams may come when we have shuffled off this mortal coil, must give us pause. There's the respect that makes calamity of so long life. For who would bear the whips and scorns of time, th' oppressor's wrong, the proud man's contumely the pangs of despised love, the law's delay, the insolence of office, and the spurns that patient merit of th' unworthy takes, when he himself might his quietus make with a bare bodkin? Who would fardels bear, to grunt and sweat under a weary life, but that the dread of something after death, the undiscovered country, from whose bourn no traveller returns, puzzles the will, and makes us rather bear those ills we have than fly to others that we know not of?  Thus conscience does make cowards of us all, and thus the native hue of resolution is sicklied o'er with the pale cast of thought, and enterprise of great pitch and moment with this regard their currents turn awry and lose the name of action. -- Soft you now, the fair Ophelia! -- Nymph, in thy orisons be all my sins remembered." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classDramaticMale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreMale;
                            }
                        }
                    }
                    default:
                    {
                            cout << "Invalid option.  Please choose 1 - 3: ";
                            cin >> play;
                    }
                }
            }
            else if (genreMale == 5)
            {
                goto pickGender;
            }
            else if (genreMale == 6)
            {
                cout << "Thank you for using the Monoloque Database!" << endl;
                return 0;
            }
            else
            {
            cout << "Invalid option. Please choose 1 - 6: ";
            cin >> genreMale;
            }
        }
        else if (gender == 'F' || gender == 'f')
        {
            genreFemale:
            cout << "Which of the following four genres are you interested in? (Choose 1 - 4)" << endl;
            cout << "1. Contemporary Comedic" << endl;
            cout << "2. Contemporary Dramatic" << endl;
            cout << "3. Classical Comedic" << endl;
            cout << "4. Classical Dramatic" << endl;
            cout << "5. Go Back" << endl;
            cout << "6. Quit Program" << endl;
            cin >> genreFemale;

            if (genreFemale <= 4)
            {
                switch (genreFemale)
                {
                    case 1:
                    {
                        contComedicFemale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. Lacey's Last Chance by Gabriel Davis" << endl;
                        cout << "2. Cocktails At Pam's by Steward Lemoine" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;
                        
                        switch (play)
                        {
                            case 1:
                            {
                                cout << "My father was a wonderful man who waited on me hand and foot when I was a child.  Mother used to jokingly call him “the slave.”  When I grew up, I expected to find a husband as loving and selfless as my father.  Instead I found Frank. I would always give Frank thirty-minute back rubs, which he always asked for. He’d never give me back rubs unless I begged, and then only for thirty seconds. And so I said, “Your turn, and I want a half an hour because I always give you a half an hour – what’s fair is fair.” And Frank said “I thought you gave me back rubs because you love me, not because you expected something in return?” And I explained that I love him, but I also wanted something since I give so much.  Then he told me I was just being selfish, and I needed to start trying to be a truly selfless person. And I know I should have just left, or something, but the apartment was so nice and why should I be the one to give it up? I’m the one who found it in the first place. And I suppose even then, there were other ways to handle things, but I couldn’t think of any at the time. Killing him was the best I could come up with.  The real problem with me and Frank was, I think, my inability to be assertive. To assert myself. I mean, had I just asserted my right to back rubs, and to my arms, and to my apartment which I found, then maybe Frank would have respected my needs and I wouldn’t have felt that killing him was the only option available to me.  I think I fluctuate between being too passive and too aggressive." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contComedicFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "No, I don't. I hate it. Actually, do you want to know what I really hate? I hate the fact that although I despise green pepper, everyone else alive seems to love it. I mean, it really doesn't bother me so much that I don't like the taste, because the reasons for that are certainly scientific or medical. No, what bothers me is that everyone else likes it and because they do, it is so much in evidence. On pizza, in salads....The other night I found some in stroganoff! Oh....yuck... And a myth has sprung up you know. People have said to me, Well, if you don't like it just pick it out. But that is so stupid. Just because you pick it out doesn't mean the flavor’s going to go away. Green pepper doesn't work like that. It is insidious and pervasive, like noxious fumes that kill you and your family while you sleep. Jesus, the way some people talk, you'd think it was parsley! I've even seen, yes it's true, green pepper that's been sliced cross-wise to make a sort of shamrock shaped ring. That's supposed to be decorative. Do you believe it? That's like making a garnish to make the bile really rise up in the throats of your dinner guests! (Estelle looks at the others who are standing quite motionless) Look, I know you all like green pepper and so you think I'm over-reacting. But what I'm trying to say is that acceptance of these foodstuffs can never be taken for granted. You can't assume it. It's not a given. No. This is something that has caused me a lot of unhappiness and I just don't want to go through that anymore................I do like red pepper though. I want you all to know that." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contComedicFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreFemale;
                            }
                        }
                    }
                    case 2:
                    {
                        contDramaticFemale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. Mogadishu by Vivienne Franzmann" << endl;
                        cout << "2. Pluto by Steve Yockey" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "Did you ever see the old pier on Brighton? [...] My dad was obsessed by it. [...] He was always going on about how it was deteriorating. He used to take a photo of it every week so he had a record of it falling down. What a weirdo. [...] I’ve got this photo of me and him standing in front of it. This really old woman took it. Dad asked her to and she was shaking because she was nervous in case she took it wrong. He bought her a cup of tea after and he kept making her laugh and calling her ‘lady in red’ and ‘scarlet woman’ because she had this red coat on. If I close my eyes, I can see that woman so clearly. I can remember everything about her. Everything. But when I think of Dad, I can’t see him. It’s like he’s getting further and further away from me and the more I try, the more I try to imagine, the more photos I look at him and try to remember, the stranger he looks. [...] When we got the pictures back, she’d cut his head off. In the photo I’m holding hands with a headless man." << endl; 
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contDramaticFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "You know, when I was just a pup, and I was an adorable puppy, you’ll just have to trust me.  But when I was young, long before I ever took on my current gig, my Mom would always bring me these little rabbits.  Tender little rabbits.  To eat.  She was a hunter, so beautiful and sleek, a lot more lean muscle than I have, but that’s not something I liked to discuss.  The cruelty of genetics, right?  But here’s the point: As I got larger, and I did get larger, my Mom continued to bring me these tender, little rabbits.  She had one child, but three mouths to feed, three large, hungry mouths, only she kept bringing little rabbit after little rabbit.  And I was hungry Elizabeth.  It wasn’t her fault, that’s important.  But my mom, she just, she loved her little puppy so much that she didn’t know how to feed her growing dog.  But one day I was too big, and I fund my own food.  And I are more than she ever would have wanted or ever could have imagined.  And there was nothing she could do to stop me." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto contDramaticFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreFemale;
                            }
                        }
                    }
                    case 3:
                    {           
                        classComedicFemale: 
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. The Importance of Being Earnest by Oscar Wilde" << endl;
                        cout << "2. An Ideal Husband by Oscar Wilde" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "Oh! It is strange he never mentioned to me that he had a ward. How secretive of him! He grows more interesting hourly. I am not sure, however, that the news inspires me with feelings of unmixed delight. I am very fond of you, Cecily: I have liked you ever since I met you! But I am bound to state that now that I know that you are Mr. Worthing’s ward, I cannot help expressing a wish you were – well, just a little older than you seem to be – and not quite so very alluring in appearance. In fact, if I may speak candidly, I wish that you were fully forty-two, and more than usually plain for your age. Ernest has a strong upright nature. He is the very soul of truth and honour. Disloyalty would be as impossible to him as deception. But even men of the noblest possible moral character are extremely susceptible to the influence of the physical charms of others. Modern, no less than Ancient History, supplies us with many most painful examples of what I refer to. If it were not so, indeed, history would be quite unreadable." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classComedicFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "Well, Tommy has proposed to me again. Tommy really does nothing but propose to me. He proposed to me last night in the music-room, when I was quite unprotected, as there was an elaborate trio going on. I didn't dare to make the smallest repartee, I need hardly tell you. If I had, it would have stopped the music at once. Musical people are so absurdly unreasonable. They always want one to be perfectly dumb at the very moment when one is longing to be absolutely deaf. Then he proposed to me in broad daylight this morning, in front of that dreadful statue of Achilles. Really, the things that go on in front of that work of art are quite appalling. The police should interfere. At luncheon I saw by the glare in his eye that he was going to propose again, and I just managed to check him in time by assuring him that I was a bimetallist. I wish, Gertrude, you would speak to him, and tell him that once a week is quite often enough to propose to any one, and that it should always be done in a manner that attracts some attention." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classComedicFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreFemale;
                            }
                        }
                    }
                    case 4:
                    {
                        classDramaticFemale:
                        cout << "Which of the following two plays are you interested in? (Choose 1 - 3)" << endl;
                        cout << "1. A Doll's House by Henrik Ibsen" << endl;
                        cout << "2. The Tempest by William Shakespeare" << endl;
                        cout << "3. Go Back" << endl;
                        cin >> play;

                        switch (play)
                        {
                            case 1:
                            {
                                cout << "It is perfectly true, Torvald. When I was at home with papa, he told me his opinion about everything, and so I had the same opinions; and if I differed from him I concealed the fact, because he would not have liked it. He called me his doll-child, and he played with me just as I used to play with my dolls. And when I came to live with you… I mean that I was simply transferred from papa’s hand into yours. You arranged everything according to your own taste, and so I got the same tastes as you – or else I pretended to, I am really not quite sure which – I think sometimes the one and sometimes the other. When I look back on it, it seems to me as if I had been living here like a poor woman – just from hand to mouth. I have existed merely to perform tricks for you, Torvald. But you would have it so. You and papa have committed a great sin against me. It is your fault that I have made nothing of my life." << endl;  
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classDramaticFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 2:
                            {
                                cout << "I do not know one of my sex, no woman’s face remember— save, from my glass, mine own. Nor have I seen more that I may call men than you, good friend, and my dear father. How features are abroad I am skill-less of, but, by my modesty, the jewel in my dower, I would not wish any companion in the world but you, nor can imagination form a shape besides yourself to like of. But I prattle something too wildly, and my father’s precepts I therein do forget. Do you love me?  I am a fool to weep at what I am glad of.  At mine unworthiness, that dare not offer what I desire to give and much less take what I shall die to want.  And prompt me, plain and holy innocence, I am your wife if you will marry me.  If not, I’ll die your maid.  To be your fellow you may deny me, but I will be your servant whether you will or no." << endl;
                                cout << "What would you like to do? (Choose 1 - 2)" << endl;
                                cout << "1. Go back" << endl;
                                cout << "2. Quit Program" << endl;
                                cin >> finalChoice;

                                for ( ; ; )
                                {
                                    if (finalChoice == 1)
                                    {
                                        goto classDramaticFemale;
                                    }
                                    else if (finalChoice == 2)
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        cout << "Please choose a valid option (Choose 1 - 2)" << endl;
                                        cin >> finalChoice;
                                    }
                                }
                            }
                            case 3:
                            {
                                goto genreFemale;
                            }
                        }
                    }
                    default:
                    {
                            cout << "Invalid option.  Please choose 1 - 3: ";
                            cin >> play;
                    }
                }
            }
            else if (genreFemale == 5)
            {
                goto pickGender;
            }
            else if (genreFemale == 6)
            {
                cout << "Thank you for using the Monoloque Database!" << endl;
                return 0;
            }
            else
            {
            cout << "Invalid option. Please choose 1 - 6: ";
            cin >> genreFemale;
            }
        }
        else
        {
            cout << "Please pick a valid option." << endl;
            cin >> gender;
        }
    }
}