/* initialize @ 18002a460 */

void initialize(void)

{
  int local_558 [2];
  undefined4 uStack_550;
  undefined4 uStack_54c;
  uint local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_10;
  
                    /* 0x2a460  4  initialize */
  local_10 = 0xfffffffffffffffe;
  FUN_180172ee0(local_558);
  if (local_558[0] == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,local_68,&PTR_FUN_180205820,
                  &DAT_1802058e8);
  }
  local_28 = local_518;
  uStack_20 = uStack_510;
  local_38 = local_528;
  uStack_34 = uStack_524;
  uStack_30 = uStack_520;
  uStack_2c = uStack_51c;
  local_48 = local_538;
  uStack_44 = uStack_534;
  uStack_40 = uStack_530;
  uStack_3c = uStack_52c;
  local_58 = local_548;
  uStack_54 = uStack_544;
  uStack_50 = uStack_540;
  uStack_4c = uStack_53c;
  uStack_60 = uStack_550;
  uStack_5c = uStack_54c;
  local_548 = local_548 & 0xffffff00;
  FUN_1800344b0(local_68,local_558,&DAT_180205900);
  FUN_180029bb0(local_68);
  return;
}


