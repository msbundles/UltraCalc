import time
import random
s = "error"
ss = "Type"
loopbool = True
wrong_art = """
                             _______        
   _dMMMb._              .adOOOOOOOOOba.              _,dMMMb_
  dP'  ~YMMb            dOOOOOOOOOOOOOOOb            aMMP~  `Yb
  V      ~"Mb          dOOOOOOOOOOOOOOOOOb          dM"~      V
           `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'
            `YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'
       __     `YMMM| OP'~"YOOOOOOOOOOOP"~`YO |MMMP'     __
     ,dMMMb.     ~~' OO     `YOOOOOP'     OO `~~     ,dMMMb.
  _,dP~  `YMba_      OOb      `OOO'      dOO      _aMMP'  ~Yb._
 <MMP'     `~YMMa_   YOOo   @  OOO  @   oOOP   _adMP~'      `YMM>
              `YMMMM\`OOOo     OOO     oOOO'/MMMMP'
      ,aa.     `~YMMb `OOOb._,dOOOb._,dOOO'dMMP~'       ,aa.
    ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb.
   ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM.
   MP'        ~YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP~       `YM
   YMb           ~YMMMM\`OOOOI`````IOOOOO'/MMMMP~           dMP
    `Mb.           `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'
      `'                  `OObNNNNNdOO'                   `'
                            `~OOOOO~'   
"""


def cs():
    print("\n" * 100)


def add():
    addinput1 = input("What is the first addend ")
    addinput2 = input("What is the second addend ")
    addoutput = int(addinput1) + int(addinput2)

    print(str(addinput1) + " plus " + str(addinput2) + " = " + str(addoutput))


def div():
    divinput1 = input("What is the dividend ")
    divinput2 = input("What is the divisor ")
    divoutput = int(divinput1) // int(divinput2)
    print(
        str(divinput1) + " divided by " + str(divinput2) + " = " +
        str(divoutput))


def mult():
    multiinput1 = input("What is the first factor ")
    multiinput2 = input("What is the second factor ")
    multioutput = int(multiinput1) * int(multiinput2)
    print(
        str(multiinput1) + " times " + str(multiinput2) + " = " +
        str(multioutput))


def sub():
    subinput1 = input("What is the minuend ")
    subinput2 = input("What is the subtrahend ")
    suboutput = int(subinput1) - int(subinput2)
    print(str(subinput1) + " minus " + str(subinput2) + " = " + str(suboutput))


def rand():
    num = input("what is you desired max value? ")
    numi = int(num)
    randnum = random.randrange(0, numi)
    print(randnum)


def meme():
    print(wrong_art)
    for _ in range(1, 25):
        print(
            "UltraCalc is the best calculator no other calculator is superior")


while loopbool == True:
    print("Welcome to UltraClac")
    print("Author: Bundles")
    print(wrong_art)
    time.sleep(2)
    cs()
    ll = list(ss)
    l = list(s)
    random.shuffle(ll)
    random.shuffle(l)
    shuffledSS = ''.join(ll)
    shuffledS = ''.join(l)
    print(wrong_art)
    print("Type / for division")
    print("Type + for addition")
    print("Type - for subtraction")
    print("Type * for multiplication")
    print("Type random for a random number between 0 and 1000000")
    print(shuffledS)
    typeof = input("What would you like to do ")
    cs()
    if typeof == "/":
        div()
    elif typeof == "*":
        mult()
    elif typeof == "+":
        add()
    elif typeof == "-":
        sub()
    elif typeof == "random":
        rand()
    elif typeof == shuffledS:
        meme()
    else:
        print("That is not a valid input")
    q = input("Would you like to continue y/n ")
    if q == "n":
        loopbool = False
    elif q == "y":
        loopbool = True
    cs()
