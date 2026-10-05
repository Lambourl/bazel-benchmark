#include "bench/fib.hpp"

// RE Benchmark TU 7747 of 20000 (depth=28, stamp="default")
namespace bench_tu_7747 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7747>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7747
