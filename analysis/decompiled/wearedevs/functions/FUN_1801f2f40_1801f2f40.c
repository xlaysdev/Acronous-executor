/* FUN_1801f2f40 @ 1801f2f40 */

ulonglong FUN_1801f2f40(ulonglong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  uVar1 = 0x3f;
  if ((param_1 | 1) != 0) {
    for (; (param_1 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  bVar2 = ((byte)uVar1 & 1) + (char)(uVar1 >> 1);
  return (param_1 >> (bVar2 & 0x3f)) + (1L << (bVar2 & 0x3f)) >> 1;
}


