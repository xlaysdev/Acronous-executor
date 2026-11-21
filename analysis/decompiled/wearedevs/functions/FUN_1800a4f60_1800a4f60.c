/* FUN_1800a4f60 @ 1800a4f60 */

undefined8 * FUN_1800a4f60(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_48;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (0x3ffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("requested buffer size too large",0x1f,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802102a0);
  }
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_180027490();
  lVar3 = thunk_FUN_1801d3550(0x10,8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  local_30 = SUB84(puVar2,0);
  uStack_2c = (undefined4)((ulonglong)puVar2 >> 0x20);
  FUN_180027490();
  plVar4 = (longlong *)thunk_FUN_1801d32d0(0x60,8);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x60);
  }
  plVar4[10] = local_48;
  plVar4[0xb] = 0;
  plVar4[8] = 1;
  plVar4[9] = 0;
  local_78 = (undefined4)lVar3;
  uStack_74 = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_68 = (undefined4)param_2;
  uStack_64 = (undefined4)(param_2 >> 0x20);
  *(undefined4 *)(plVar4 + 6) = local_68;
  *(undefined4 *)((longlong)plVar4 + 0x34) = uStack_64;
  *(undefined4 *)(plVar4 + 7) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80000000;
  *(undefined4 *)(plVar4 + 4) = local_78;
  *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_74;
  *(undefined4 *)(plVar4 + 5) = local_78;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_74;
  *(undefined4 *)(plVar4 + 2) = local_30;
  *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_2c;
  *(undefined4 *)(plVar4 + 3) = local_30;
  *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
  *(undefined4 *)plVar4 = 1;
  *(undefined4 *)((longlong)plVar4 + 4) = 0;
  *(undefined4 *)(plVar4 + 1) = 1;
  *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
  LOCK();
  lVar3 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 == 0 || SCARRY8(lVar3,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x30,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x30);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  *(undefined2 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *param_1 = plVar4;
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = plVar4;
  return param_1;
}


