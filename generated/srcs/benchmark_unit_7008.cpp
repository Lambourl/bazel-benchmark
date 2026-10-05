#include "bench/fib.hpp"

// RE Benchmark TU 7008 of 20000 (depth=28, stamp="default")
namespace bench_tu_7008 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7008>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7008
