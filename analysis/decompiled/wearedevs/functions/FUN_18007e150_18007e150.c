/* FUN_18007e150 @ 18007e150 */

void FUN_18007e150(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  *puVar4 = param_2;
  puVar4[1] = param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00018007e1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((lVar3 - 1U & 0xfffffffffffffff0) + lVar1 + 0x10,puVar4,&PTR_FUN_18020cce0,
             UNRECOVERED_JUMPTABLE);
  return;
}


