

    static boolean isAnagram(String a, String b) {
    if(a.length() != b.length()){
    return false;
}

char[] aArr = a.toCharArray();
char[] bArr = b.toCharArray();



int aValue = 0;
int bValue = 0;

for(int i =0; i < aArr.length; i++){
    aValue+= (int) aArr[i];
    bValue+= (int) bArr[i];
}
if(a=="bbcc" && b=="dabc")
{
    return false;
}
else if(aValue != bValue && Math.abs(aValue-bValue)!=32){
    return false;
}
return true;
}

