/* FUN_1800f59b0 @ 1800f59b0 */

bool FUN_1800f59b0(longlong *param_1,void *param_2,size_t param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  
  if ((char)param_1[2] == '\0') {
    if (param_1[1] == param_3) {
      iVar4 = memcmp((void *)*param_1,param_2,param_3);
      return iVar4 == 0;
    }
  }
  else if (param_1[1] == param_3) {
    sVar5 = 0;
    do {
      bVar3 = param_3 == sVar5;
      if (param_3 == sVar5) {
        return bVar3;
      }
      pbVar1 = (byte *)(*param_1 + sVar5);
      pbVar2 = (byte *)((longlong)param_2 + sVar5);
      sVar5 = sVar5 + 1;
    } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
             (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
    return bVar3;
  }
  return false;
}


