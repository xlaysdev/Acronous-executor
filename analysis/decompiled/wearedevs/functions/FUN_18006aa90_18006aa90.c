/* FUN_18006aa90 @ 18006aa90 */

longlong * FUN_18006aa90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *_Dst;
  undefined8 local_b8 [11];
  undefined2 local_60;
  undefined8 local_38;
  undefined *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = 0;
  local_38 = 1;
  local_30 = &DAT_18020ae98;
  local_b8[0] = 0x8000000000000000;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (longlong *)0x0) {
    local_28 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_b8,0x90);
  lVar1 = *_Dst;
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(_Dst[1],lVar1,1);
  }
  _Dst[10] = param_1[10];
  lVar1 = param_1[9];
  _Dst[8] = param_1[8];
  _Dst[9] = lVar1;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = param_1[4];
  lVar6 = param_1[5];
  lVar7 = param_1[7];
  _Dst[6] = param_1[6];
  _Dst[7] = lVar7;
  _Dst[4] = lVar5;
  _Dst[5] = lVar6;
  _Dst[2] = lVar3;
  _Dst[3] = lVar4;
  *_Dst = lVar1;
  _Dst[1] = lVar2;
  return _Dst;
}


