#include "bench/fib.hpp"

// RE Benchmark TU 14926 of 20000 (depth=28, stamp="default")
namespace bench_tu_14926 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14926>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14926
