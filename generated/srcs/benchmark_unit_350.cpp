#include "bench/fib.hpp"

// RE Benchmark TU 350 of 20000 (depth=28, stamp="default")
namespace bench_tu_350 {
constexpr unsigned long long result = ::bench::slow_fib<28, 350>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_350
