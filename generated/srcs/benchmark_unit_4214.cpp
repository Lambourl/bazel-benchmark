#include "bench/fib.hpp"

// RE Benchmark TU 4214 of 20000 (depth=28, stamp="default")
namespace bench_tu_4214 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4214>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4214
