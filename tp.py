
print(pow(2, 15))
imm = 0
ALUOUT = 0
updatePC = False
# There are 5 dummy instructions
# each instruction is of 25 bits
instructionList = ['10110', '10010', '01101', '00011', '01111']
pc = 0
updatePC = 0
newAddress = 0

# Here is the fetch function


def fetch():
    # Taking current address in temp variable
    address = pc
    # If there is jump the address will jump
    if(updatePC):
        address = newAddress
    # Else there will be increment in the pc
    else:
        address += 1
    return address


while(True):
    cur_instruction = instructionList[pc]
    # 5 cycle stages
    for i in range(5):
        if(i >= 1):
            continue
        else:
            # Fetch
            fetch()
