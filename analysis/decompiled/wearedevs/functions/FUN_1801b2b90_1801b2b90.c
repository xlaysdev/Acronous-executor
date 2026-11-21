/* FUN_1801b2b90 @ 1801b2b90 */

void FUN_1801b2b90(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  LOCK();
  plVar1 = param_1 + 2;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  cVar4 = FUN_1801f2f10(uVar3,1);
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_21,&DAT_180285b28,
                  &PTR_s_C__Users_burne__cargo_registry_s_180285ce8);
  }
  thunk_FUN_1801d3330(uVar2,uVar3,1);
  thunk_FUN_1801d3330(param_1,0x18,8);
  return;
}


