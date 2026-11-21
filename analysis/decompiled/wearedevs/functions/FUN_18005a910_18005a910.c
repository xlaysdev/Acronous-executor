/* FUN_18005a910 @ 18005a910 */

void * FUN_18005a910(void *param_1,undefined8 param_2,void *param_3)

{
  char cVar1;
  longlong *_Src;
  undefined1 local_438 [272];
  longlong local_328 [5];
  undefined1 local_300 [232];
  longlong local_218 [17];
  undefined1 local_190 [128];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_110 = param_2;
  memcpy(local_218,param_3,0x108);
  if ((int)local_218[0] != 2) {
    local_1a = 1;
    FUN_18005acd0(&local_e8,local_190);
    if (!SBORROW8(0,local_e8)) {
      local_58 = local_d8;
      local_68 = local_e8;
      uStack_60 = uStack_e0;
      local_88 = local_d0;
      uStack_80 = uStack_c8;
      local_78 = local_c0;
      memcpy(local_438,local_218,0x110);
      local_19 = 1;
      FUN_18007e210(&local_50,&local_68,&local_88);
      memcpy(local_328,local_438,0x110);
      local_28 = local_328[0];
      if (local_328[0] == 2) {
        memcpy(param_1,local_438,0x110);
        (**(code **)(local_50 + 0x20))
                  (CONCAT44(uStack_34,uStack_38),uStack_48,CONCAT44(uStack_3c,local_40));
        return param_1;
      }
      local_a8 = local_40;
      uStack_a4 = uStack_3c;
      uStack_a0 = uStack_38;
      uStack_9c = uStack_34;
      local_b8 = local_50;
      uStack_b0 = uStack_48;
      _local_98 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
      local_108 = 0;
      local_100 = 0x10;
      local_f8 = 0;
      uStack_f0 = 0;
      cVar1 = FUN_180052bb0(local_300,&local_108,&local_b8);
      if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_1b,&DAT_180208de8,
                      &PTR_s_C__Users_burne__cargo_registry_s_180209868);
      }
      _Src = local_328;
      goto LAB_18005a983;
    }
  }
  _Src = local_218;
LAB_18005a983:
  memcpy(param_1,_Src,0x110);
  return param_1;
}


