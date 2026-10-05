#include "bench/fib.hpp"

// RE Benchmark TU 15723 of 20000 (depth=28, stamp="default")
namespace bench_tu_15723 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15723>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15723
