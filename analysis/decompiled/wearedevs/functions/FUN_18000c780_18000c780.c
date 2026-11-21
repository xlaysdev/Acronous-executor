/* FUN_18000c780 @ 18000c780 */

void FUN_18000c780(char *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018000c793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(*(HANDLE *)(param_1 + 8));
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (((uint)lVar1 & 3) != 1) {
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + -1);
  puVar3 = *(undefined8 **)(lVar1 + 7);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
  }
  thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
  return;
}


