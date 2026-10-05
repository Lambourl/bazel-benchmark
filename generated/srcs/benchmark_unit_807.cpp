#include "bench/fib.hpp"

// RE Benchmark TU 807 of 20000 (depth=28, stamp="default")
namespace bench_tu_807 {
constexpr unsigned long long result = ::bench::slow_fib<28, 807>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_807
