/* FUN_1801d5770 @ 1801d5770 */

undefined8 FUN_1801d5770(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *_Size;
  longlong lVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  _Size = &uStack_68;
  uVar1 = FUN_1801db450(0,_Size,0x20);
  if ((uVar1 & 1) != 0) {
    do {
      uVar2 = 1;
      switch((uint)_Size & 3) {
      case 0:
        if (*(char *)(_Size + 2) != '#') {
          return 1;
        }
        break;
      case 1:
        if (*(char *)((longlong)_Size + 0xf) != '#') {
          return 1;
        }
        local_48 = (undefined1 *)((longlong)_Size + -1);
        local_40 = *(undefined8 *)((longlong)_Size + -1);
        local_38 = *(undefined8 **)((longlong)_Size + 7);
        if ((code *)*local_38 != (code *)0x0) {
          (*(code *)*local_38)(*(undefined8 *)((longlong)_Size + -1));
        }
        if (local_38[1] != 0) {
          thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
        }
        thunk_FUN_1801d3330(local_48,0x18,8);
        break;
      case 2:
        goto switchD_1801d57fa_caseD_2;
      case 3:
        if ((int)((ulonglong)_Size >> 0x20) != 0x23) {
          return 1;
        }
      }
      _Size = &uStack_68;
      uVar1 = FUN_1801db450(param_1,&uStack_68,0x20);
    } while ((uVar1 & 1) != 0);
  }
  if (&DAT_00000020 < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0);
  }
  lVar3 = param_2[2];
  if ((undefined8 *)(*param_2 - lVar3) < _Size) {
    FUN_180200f70(param_2,lVar3,_Size,1,1);
    lVar3 = param_2[2];
  }
  memcpy((void *)(param_2[1] + lVar3),&uStack_68,(size_t)_Size);
  param_2[2] = (longlong)(lVar3 + (longlong)_Size);
  uVar2 = 0;
switchD_1801d57fa_caseD_2:
  return uVar2;
}


