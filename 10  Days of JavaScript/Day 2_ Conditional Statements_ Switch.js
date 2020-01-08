

function getLetter(s) {
    let letter;
    const  num=s[0];
    if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u')
    {
        letter='A';
    }
    else if(num=='b' || num=='c' || num=='d' || num=='f' || num=='g')
    {
        letter='B';
    }
    else if(num=='h' || num=='j' || num=='k' || num=='l' || num=='m')
    {
        letter='C';
    }
    else
    {
        letter='D';
    }
    
    return letter;
}

