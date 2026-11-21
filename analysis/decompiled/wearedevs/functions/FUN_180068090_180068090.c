/* FUN_180068090 @ 180068090 */

void FUN_180068090(longlong *param_1,undefined8 param_2)

{
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_1801ef980(local_30,param_2,"reqwest::Error",0xe);
  param_1 = (longlong *)*param_1;
  FUN_1801ef590(local_30,"kindBuilderRequestRedirect",4,param_1 + 0xb,&PTR_LAB_18020adb0);
  if (!SBORROW8(0,*param_1)) {
    local_20 = (undefined4)param_1[1];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_18 = (undefined4)param_1[2];
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_1801ef590(local_30,"url",3,&local_20,&DAT_18020add0);
  }
  if (param_1[0x10] != 0) {
    FUN_1801ef590(local_30,"source",6,param_1 + 0x10,&PTR_FUN_18020ace8);
  }
  FUN_1801ef720(local_30);
  return;
}


