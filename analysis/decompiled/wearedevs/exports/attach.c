/* attach @ 18002a310 */

void attach(void)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x2a310  2  attach */
  local_10 = 0xfffffffffffffffe;
  FUN_180035f40(&local_50);
  if (!SBORROW8(0,CONCAT44(uStack_4c,local_50))) {
    local_18 = local_40;
    local_28 = local_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    local_38 = &local_28;
    local_30 = &LAB_18002a120;
    FUN_1801d72f0(&DAT_180205808,&local_38);
    if (CONCAT44(uStack_24,local_28) != 0) {
      thunk_FUN_1801d3330(CONCAT44(uStack_1c,uStack_20),CONCAT44(uStack_24,local_28),1);
    }
  }
  return;
}


