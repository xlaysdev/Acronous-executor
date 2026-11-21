/* FUN_180121a10 @ 180121a10 */

longlong * FUN_180121a10(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  
  FUN_180027490();
  plVar3 = (longlong *)thunk_FUN_1801d32d0(0x70,8);
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x70);
  }
  plVar3[0xc] = local_30;
  plVar3[0xd] = lStack_28;
  plVar3[10] = local_40;
  plVar3[0xb] = lStack_38;
  plVar3[8] = local_50;
  plVar3[9] = lStack_48;
  *(undefined4 *)(plVar3 + 6) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x34) = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = 0;
  *(undefined4 *)(plVar3 + 4) = local_70;
  *(undefined4 *)((longlong)plVar3 + 0x24) = uStack_6c;
  *(undefined4 *)(plVar3 + 5) = uStack_68;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = uStack_64;
  *(undefined4 *)(plVar3 + 2) = local_80;
  *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_7c;
  *(undefined4 *)(plVar3 + 3) = uStack_78;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_74;
  *(undefined4 *)plVar3 = 1;
  *(undefined4 *)((longlong)plVar3 + 4) = 0;
  *(undefined4 *)(plVar3 + 1) = 1;
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  puVar4[2] = 0;
  puVar4[3] = plVar3;
  *puVar4 = 1;
  puVar4[1] = 1;
  return plVar3;
}


