/* FUN_1801ef8b0 @ 1801ef8b0 */

void FUN_1801ef8b0(longlong *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((char)param_1[1] == '\0') {
    uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))
                      (*(undefined8 *)*param_1,&DAT_1802936c1,1);
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


