#include "bench/fib.hpp"

// RE Benchmark TU 1201 of 20000 (depth=28, stamp="default")
namespace bench_tu_1201 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1201>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1201
