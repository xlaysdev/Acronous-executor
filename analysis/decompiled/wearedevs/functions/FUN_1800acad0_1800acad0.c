/* FUN_1800acad0 @ 1800acad0 */

undefined8 * FUN_1800acad0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  plVar3 = (longlong *)*param_2;
  uVar5 = plVar3[8];
  do {
    if (uVar5 == (plVar3[6] ^ 0x7fffffffffffffffU)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("cannot clone `Sender` -- too many outstanding senders",0x35,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802108e0);
    }
    LOCK();
    uVar1 = plVar3[8];
    bVar7 = uVar5 == uVar1;
    if (bVar7) {
      plVar3[8] = uVar5 + 1;
    }
    else {
      uVar5 = uVar1;
    }
    UNLOCK();
  } while (!bVar7);
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  FUN_180027490();
  puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x30,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x30);
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  *(undefined2 *)(puVar6 + 2) = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 5) = 0;
  *param_1 = plVar3;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}


