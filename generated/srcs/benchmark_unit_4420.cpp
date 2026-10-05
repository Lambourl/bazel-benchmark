#include "bench/fib.hpp"

// RE Benchmark TU 4420 of 20000 (depth=28, stamp="default")
namespace bench_tu_4420 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4420>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4420
