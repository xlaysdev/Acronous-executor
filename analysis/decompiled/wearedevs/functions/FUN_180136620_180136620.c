/* FUN_180136620 @ 180136620 */

void FUN_180136620(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  FUN_1801ef980(local_28,param_2,"PushPromise",0xb);
  uVar1 = FUN_1801ef590(local_28,"stream_id",9,param_1 + 0x110,&DAT_18024b820);
  uVar1 = FUN_1801ef590(uVar1,"promised_id",0xb,param_1 + 0x114,&DAT_18024b820);
  uVar1 = FUN_1801ef590(uVar1,"flags",5,param_1 + 0x118,&DAT_18024b938);
  FUN_1801ef720(uVar1);
  return;
}


