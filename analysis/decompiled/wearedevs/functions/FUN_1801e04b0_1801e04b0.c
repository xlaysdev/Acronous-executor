/* FUN_1801e04b0 @ 1801e04b0 */

longlong FUN_1801e04b0(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  
  uVar2 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x130);
  if (uVar2 < 3) {
    lVar4 = FUN_180200920(uVar2);
    return lVar4;
  }
  LOCK();
  plVar1 = (longlong *)(uVar2 - 0x10);
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return uVar2 - 0x10;
}


