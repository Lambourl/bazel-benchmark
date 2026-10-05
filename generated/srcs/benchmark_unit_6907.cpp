#include "bench/fib.hpp"

// RE Benchmark TU 6907 of 20000 (depth=28, stamp="default")
namespace bench_tu_6907 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6907>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6907
