#include "bench/fib.hpp"

// RE Benchmark TU 4008 of 20000 (depth=28, stamp="default")
namespace bench_tu_4008 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4008>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4008
