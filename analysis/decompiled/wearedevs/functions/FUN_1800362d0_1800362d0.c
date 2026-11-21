/* FUN_1800362d0 @ 1800362d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1800362d0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *_Size;
  undefined1 auStack_2070 [8192];
  longlong local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  puVar5 = *(undefined1 **)(param_1 + 0x20);
  puVar3 = puVar5;
  if (puVar1 < puVar5) {
    puVar3 = puVar1;
  }
  local_68 = *(longlong *)(param_1 + 8);
  _Size = puVar1 + -(longlong)puVar3;
  if ((undefined1 *)0x1fff < _Size) {
    _Size = (undefined1 *)0x2000;
  }
  memcpy(auStack_2070,puVar3 + local_68,(size_t)_Size);
  *(undefined1 **)(param_1 + 0x20) = _Size + (longlong)puVar5;
  puVar3 = _Size + (longlong)puVar5;
  local_70 = param_1;
  do {
    puVar2 = puVar3;
    if (puVar1 <= puVar5) {
      return 0;
    }
    puVar5 = auStack_2070;
    do {
      puVar3 = puVar5;
      uVar4 = FUN_1801e1690(param_2,puVar5,_Size);
      if ((uVar4 & 1) == 0) {
        if (puVar3 == (undefined1 *)0x0) {
          return 1;
        }
        if (_Size < puVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(puVar3,_Size,_Size,&PTR_s_C__Users_burne__rustup_toolchain_180206a98);
        }
        puVar5 = puVar5 + (longlong)puVar3;
        _Size = _Size + -(longlong)puVar3;
      }
      else {
        switch((uint)puVar3 & 3) {
        case 0:
          if (puVar3[0x10] != '#') {
            return 1;
          }
          break;
        case 1:
          if (puVar3[0xf] != '#') {
            return 1;
          }
          local_60 = puVar3 + -1;
          local_58 = *(undefined8 *)(puVar3 + -1);
          local_50 = *(undefined8 **)(puVar3 + 7);
          if ((code *)*local_50 != (code *)0x0) {
            (*(code *)*local_50)(local_58);
          }
          if (local_50[1] != 0) {
            thunk_FUN_1801d3330(local_58,local_50[1],local_50[2]);
          }
          thunk_FUN_1801d3330(local_60,0x18,8);
          break;
        case 2:
switchD_1800363be_caseD_2:
          if (puVar3 != (undefined1 *)0x0) {
            return 1;
          }
          goto LAB_180036475;
        case 3:
          if ((int)((ulonglong)puVar3 >> 0x20) != 0x23) goto switchD_1800363be_caseD_2;
        }
      }
    } while (_Size != (undefined1 *)0x0);
LAB_180036475:
    puVar5 = puVar2;
    if (puVar1 < puVar2) {
      puVar5 = puVar1;
    }
    _Size = puVar1 + -(longlong)puVar5;
    if ((undefined1 *)0x1fff < _Size) {
      _Size = (undefined1 *)0x2000;
    }
    memcpy(auStack_2070,puVar5 + local_68,(size_t)_Size);
    *(undefined1 **)(local_70 + 0x20) = _Size + (longlong)puVar2;
    puVar3 = _Size + (longlong)puVar2;
    puVar5 = puVar2;
  } while( true );
}


