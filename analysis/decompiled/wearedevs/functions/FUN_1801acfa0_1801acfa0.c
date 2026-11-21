/* FUN_1801acfa0 @ 1801acfa0 */

bool FUN_1801acfa0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != *(longlong *)(param_2 + 0x10)) {
    return false;
  }
  lVar5 = 0;
  do {
    bVar4 = lVar3 == lVar5;
    if (lVar3 == lVar5) {
      return bVar4;
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + lVar5);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + lVar5);
    lVar5 = lVar5 + 1;
  } while ((byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) ==
           (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
  return bVar4;
}


