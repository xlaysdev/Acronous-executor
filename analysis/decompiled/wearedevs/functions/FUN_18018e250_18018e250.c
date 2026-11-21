/* FUN_18018e250 @ 18018e250 */

undefined8 FUN_18018e250(void)

{
  longlong lVar1;
  code *pcVar2;
  HANDLE pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint6 uStack_6e;
  uint6 uStack_4e;
  uint7 uStack_27;
  
  pvVar3 = CreateIoCompletionPort((HANDLE)0xffffffffffffffff,(HANDLE)0x0,0,0);
  if (pvVar3 == (HANDLE)0x0) {
    GetLastError();
    return 1;
  }
  FUN_180027490();
  plVar4 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *plVar4 = 1;
  plVar4[1] = 1;
  plVar4[2] = (longlong)pvVar3;
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 == 0 || SCARRY8(lVar1,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_180027490();
  puVar5 = (undefined8 *)thunk_FUN_1801d32d0(0x70,8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x70);
  }
  puVar5[0xc] = 0;
  puVar5[0xd] = (ulonglong)uStack_27 << 8;
  puVar5[10] = 8;
  puVar5[0xb] = 0;
  puVar5[8] = (ulonglong)uStack_4e << 0x10;
  puVar5[9] = 0;
  puVar5[6] = 8;
  puVar5[7] = 0;
  puVar5[4] = (ulonglong)uStack_6e << 0x10;
  puVar5[5] = 0;
  puVar5[2] = plVar4;
  puVar5[3] = plVar4;
  *puVar5 = 1;
  puVar5[1] = 1;
  return 0;
}


